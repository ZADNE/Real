# author     Dubsky Tomas

include("cmake/RealProjects/CollateShaders.cmake")
include("cmake/RealProjects/GenerateCppFiles.cmake")

# Do not use directly, use add_real_library or add_real_executable
macro(_add_real_target target)
    get_target_property(source_dir ${target} SOURCE_DIR)
    set_target_properties(${target} PROPERTIES
        realproject_base_dir_rel        "."
        realproject_base_dir_abs        "${target}"
        realproject_glsl_standard       "460"
        realproject_shader_sources_rel  ""
        realproject_shader_sources_abs  ""
    )
    cmake_language(DEFER CALL RealProject_CollateShaders ${target})
endmacro()

# Adds library that can also have shaders added via 'target_shaders'
macro(add_real_library)
    add_library(${ARGV})
    _add_real_target(${ARGV0})
endmacro()

# Adds executable that can also have shaders added via 'target_shaders'
macro(add_real_executable)
    add_executable(${ARGV})
    _add_real_target(${ARGV0})
endmacro()

# Initializes base dirs of file sets
function(real_target_init_file_sets target)
    set(multiValueArgs BASE_DIR)
    cmake_parse_arguments(ARG "" "" "${multiValueArgs}" ${ARGN})
    
    get_target_property(source_dir ${target} SOURCE_DIR)
    set_target_properties(${target} PROPERTIES
        realproject_base_dir_rel "${ARG_BASE_DIR}"
        realproject_base_dir_abs "${source_dir}/${ARG_BASE_DIR}"
    )
    target_sources(${target} PUBLIC FILE_SET "realproject_public_headers"
        TYPE HEADERS BASE_DIRS "${ARG_BASE_DIR}")
endfunction()

# Adds C++ source files (headers, source, shaders) files to a target
function(real_target_sources target)
    # Parse args
    set(multiValueArgs PUBLIC PRIVATE)
    cmake_parse_arguments(ARG "" "" "${multiValueArgs}" ${ARGN})
    # Get relative path
    get_target_property(target_base_dir ${target} realproject_base_dir_abs)
    cmake_path(RELATIVE_PATH CMAKE_CURRENT_SOURCE_DIR
        BASE_DIRECTORY ${target_base_dir} OUTPUT_VARIABLE path_rel)

    # Process public files
    foreach (source IN LISTS ARG_PUBLIC)
        get_filename_component(source_ext ${source} LAST_EXT)
        if ("${source_ext}" STREQUAL ".hpp") # Public header
            target_sources(${target} PUBLIC FILE_SET realproject_public_headers ${source})
        elseif("${source_ext}" STREQUAL ".cpp") # 'Public' source will be private
            target_sources(${target} PRIVATE ${source})
        else() # 'Public' shader will be private
            target_sources(${target} PRIVATE ${source})
            list(APPEND shaders ${source})
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_shader_sources_rel "${path_rel}/${source}")
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_shader_sources_abs "${CMAKE_CURRENT_SOURCE_DIR}/${source}")
        endif()
    endforeach()

    # Process private files
    foreach (source IN LISTS ARG_PRIVATE)
        get_filename_component(source_ext ${source} LAST_EXT)
        if ("${source_ext}" STREQUAL ".hpp") # Private header
            target_sources(${target} PRIVATE ${source})
        elseif("${source_ext}" STREQUAL ".cpp") # Private source
            target_sources(${target} PRIVATE ${source})
        else() # Private shader
            target_sources(${target} PRIVATE ${source})
            list(APPEND shaders ${source})
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_shader_sources_rel "${path_rel}/${source}")
            set_property(TARGET ${target}
                APPEND PROPERTY realproject_shader_sources_abs "${CMAKE_CURRENT_SOURCE_DIR}/${source}")
        endif()
    endforeach()


    if (DEFINED shaders)
        RealProject_GenerateCppWrappersForShaders(${target} PRIVATE ${path_rel} ${shaders})
    endif()
endfunction()