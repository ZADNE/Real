# author     Dubsky Tomas

include("cmake/RealProject/CollateShaders.cmake")
include("cmake/RealProject/GenerateCppFiles.cmake")

# Cache variables
set(REALPROJECT_HEADER_EXTENSIONS
    ".hpp;.h"
    CACHE STRING "List of file extensions interpreted as C/C++ header files"
)
set(REALPROJECT_SOURCE_EXTENSIONS
    ".cpp;.c"
    CACHE STRING "List of file extensions interpreted as C/C++ source files"
)
set(REALPROJECT_GLSL_HEADER_EXTENSIONS
    ".glsl"
    CACHE STRING "List of file extensions interpreted as GLSL header files"
)
set(REALPROJECT_GLSL_STAGE_EXTENSIONS
    ".vert;.tesc;.tese;.geom;.frag;.comp"
    CACHE STRING "List of file extensions interpreted as GLSL stage files"
)

# Do not use directly, use add_real_library or add_real_executable
macro(_add_real_target target)
    get_target_property(source_dir ${target} SOURCE_DIR)
    set_target_properties(${target} PROPERTIES
        realproject_base_dir_rel                "."
        realproject_base_dir_abs                "${source_dir}"
        realproject_glsl_standard               "460"
        realproject_glsl_sources_rel            ""
        realproject_exposed_glsl_headers_rel    ""
    )
    cmake_language(DEFER CALL _generate_cpp_wrappers_for_shaders ${target})
    cmake_language(DEFER CALL _collate_shaders ${target})
endmacro()

# Adds a Real library
# Add both C++ and GLSL sources via real_target_sources
macro(add_real_library)
    add_library(${ARGV})
    _add_real_target(${ARGV0})
endmacro()

# Adds a Real library
# Add both C++ and GLSL sources via real_target_sources
macro(add_real_executable)
    add_executable(${ARGV})
    _add_real_target(${ARGV0})
endmacro()

# Initializes base dirs of file sets
function(real_target_init_file_sets target)
    set(multi_value_args BASE_DIR)
    cmake_parse_arguments(ARG "" "" "${multi_value_args}" ${ARGN})
    
    get_target_property(source_dir ${target} SOURCE_DIR)
    set_target_properties(${target} PROPERTIES
        realproject_base_dir_rel "${ARG_BASE_DIR}"
        realproject_base_dir_abs "${source_dir}/${ARG_BASE_DIR}"
    )
    target_sources(${target} PUBLIC FILE_SET realproject_public_headers
        TYPE HEADERS BASE_DIRS "${ARG_BASE_DIR}"
    )
endfunction()

# Nested function to process 
function(_incorporate_scoped_sources target path_rel header_scope)
    set(single_value_args "EXPOSE_TO_CPP")
    cmake_parse_arguments(ARG "" "${single_value_args}" "" ${ARGN})

    # Non-exposed to C++
    foreach(source IN LISTS ARG_UNPARSED_ARGUMENTS)
        get_filename_component(source_ext ${source} LAST_EXT)
        if(${source_ext} IN_LIST REALPROJECT_HEADER_EXTENSIONS)
            if(${header_scope} STREQUAL "PUBLIC")
                target_sources(${target}
                    ${header_scope} FILE_SET realproject_public_headers FILES ${source})
            elseif(${header_scope} STREQUAL "PRIVATE")
                target_sources(${target} PRIVATE ${source})
            endif()
        elseif(${source_ext} IN_LIST REALPROJECT_SOURCE_EXTENSIONS)
            target_sources(${target} PRIVATE ${source})
        elseif(${source_ext} IN_LIST REALPROJECT_GLSL_HEADER_EXTENSIONS OR
               ${source_ext} IN_LIST REALPROJECT_GLSL_STAGE_EXTENSIONS)
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_glsl_sources_rel
                "${path_rel}/${source}")
        else()
            message(FATAL_ERROR
                "Target ${target}: ${path_rel}/${source} has unknown file extension."
            )
        endif()
    endforeach()

    # GLSL headers exposed to C++
    foreach(source IN LISTS ARG_EXPOSE_TO_CPP)
        get_filename_component(source_ext ${source} LAST_EXT)
        if(${source_ext} IN_LIST REALPROJECT_GLSL_HEADER_EXTENSIONS)
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_exposed_glsl_headers_rel
                "${path_rel}/${source}")
        else()
            message(FATAL_ERROR
                "Target ${target}: ${path_rel}/${source} is not recognized as a GLSL header"
                "and thus cannot be exposed to C++."
            )
        endif()
    endforeach()
endfunction()

# Adds C++ source files (headers, source, shaders) files to a target
function(real_target_sources target)
    # Separate sources into public and private categories
    set(multi_value_args "PUBLIC" "PRIVATE")
    cmake_parse_arguments(ARG "" "" "${multi_value_args}" ${ARGN})

    # Get relative path
    get_target_property(target_base_dir ${target} realproject_base_dir_abs)
    cmake_path(RELATIVE_PATH CMAKE_CURRENT_SOURCE_DIR
        BASE_DIRECTORY ${target_base_dir} OUTPUT_VARIABLE path_rel)

    # Incorporate the sources
    _incorporate_scoped_sources(${target} ${path_rel} PUBLIC ${ARG_PUBLIC})
    _incorporate_scoped_sources(${target} ${path_rel} PRIVATE ${ARG_PRIVATE})
endfunction()