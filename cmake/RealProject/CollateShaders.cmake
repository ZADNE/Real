# author    Dubsky Tomas

function(RealProject_CollateShaders target)
    # Load target properties and prepare variables
    get_target_property(base_dir ${target} realproject_base_dir_rel)
    get_target_property(shader_sources_rel ${target} realproject_shader_sources_rel)
    get_target_property(shader_sources_abs ${target} realproject_shader_sources_abs)
    get_target_property(target_type ${target} TYPE)
    set(shader_includes "$<TARGET_PROPERTY:${target},INCLUDE_DIRECTORIES>")

    if(${target_type} STREQUAL "INTERFACE_LIBRARY")
        list(LENGTH "${shader_sources_rel}" shader_count)
        if(${shader_count} GREATER 0)
            message(FATAL_ERROR "Target ${target}: Interface libraries cannot have shaders")
        endif()
        return()
    endif()

    # Determine shader compilation flags
    if(${CMAKE_BUILD_TYPE} STREQUAL "Release")
        set(glslc_flags "-O")
    elseif(${CMAKE_BUILD_TYPE} STREQUAL "RelWithDebInfo")
        set(glslc_flags "-g")
    elseif(${CMAKE_BUILD_TYPE} STREQUAL "MinSizeRel")
        set(glslc_flags "-Os")
    else()
        set(glslc_flags "-O0" "-g")
        if(NOT ${CMAKE_BUILD_TYPE} STREQUAL "Debug")
            message(WARNING "Configuting unknown configuration
            (not Release, Debug, RelWithDebInfo or MinSizeRel). 
            GLSL will be compiled as Debug.")
        endif()
    endif()
    get_target_property(glsl_standard ${target} realproject_glsl_standard)
    list(APPEND glslc_flags "-std=${glsl_standard}")

    # Collate the shaders
    set(stage_exts ".vert;.tesc;.tese;.geom;.frag;.comp")
    foreach(shader_source IN ZIP_LISTS shader_sources_rel shader_sources_abs)
        set(shader_source_rel ${shader_source_0})
        get_filename_component(shader_ext ${shader_source_rel} LAST_EXT)
        if (${shader_ext} IN_LIST stage_exts)
            set(shader_source_abs ${shader_source_1})
            set(shader_bin_abs "${CMAKE_CURRENT_BINARY_DIR}/${base_dir}/${shader_source_rel}.spv")
            list(APPEND shader_bins_abs "${shader_bin_abs}_vk13")
            set(shader_dep_abs "${CMAKE_CURRENT_BINARY_DIR}/${base_dir}/${shader_source_rel}.d")
            get_filename_component(shader_bin_dir_abs ${shader_bin_abs} DIRECTORY)
            file(MAKE_DIRECTORY ${shader_bin_dir_abs})
            add_custom_command(
                OUTPUT "${shader_bin_abs}_vk13" "${shader_bin_abs}_vk13.txt"
                COMMAND ${Vulkan_GLSLC_EXECUTABLE} -MD -mfmt=c -MF ${shader_dep_abs} ${shader_source_abs}
                        -o "${shader_bin_abs}_vk13" --target-env=vulkan1.3 ${glslc_flags}
                        "$<$<BOOL:${shader_includes}>:-I$<JOIN:${shader_includes},;-I>>"
                COMMAND ${Vulkan_GLSLC_EXECUTABLE} -S ${shader_source_abs}
                        -o "${shader_bin_abs}_vk13.txt" --target-env=vulkan1.3 ${glslc_flags}
                        "$<$<BOOL:${shader_includes}>:-I$<JOIN:${shader_includes},;-I>>"
                DEPENDS ${shader_source_abs}
                BYPRODUCTS ${shader_dep_abs}
                COMMENT "Compiling shader: ${shader_source_rel}"
                DEPFILE ${shader_dep_abs}
                VERBATIM
                COMMAND_EXPAND_LISTS
            )
        endif()
    endforeach()

    # Add custom target which compiles the shaders
    set(shader_target "${target}_Shaders")
    add_custom_target(${shader_target} DEPENDS ${shader_bins_abs})
    add_dependencies(${target} ${shader_target})

    # Include base subdirectory in binary dir
    get_target_property(base_dir ${target} realproject_base_dir_rel)
    target_include_directories(${target}
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${base_dir}>
    )
endfunction()