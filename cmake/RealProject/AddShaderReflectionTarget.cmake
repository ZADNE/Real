# author    Dubsky Tomas

include("cmake/RealProject/Utility.cmake")

function(_add_shader_reflection_target target)
    # Check if this target has shaders
    _does_target_have_shaders(${target})
    if(NOT ${target_has_shaders})
        return()
    endif()

    # Load target properties and prepare variables
    get_target_property(base_dir ${target} realproject_base_dir_rel)
    get_target_property(ib_headers_rel ${target} realproject_glsl_ib_headers_rel)
    get_target_property(target_includes ${target} INCLUDE_DIRECTORIES)
    get_target_property(cpp_namespace ${target} realproject_shader_cxx_namespace)
    if (NOT ib_headers_rel)
        return()
    endif()

    # Create commands to reflect the interface blocks
    foreach(ib_rel IN LISTS ib_headers_rel)
        get_filename_component(ib_name ${ib_rel} NAME_WE)
        string(TOLOWER ${ib_name} ib_name_lower)
        string(REGEX REPLACE "^(.*)(ub|sb|pc)$" "\\2" ib_type ${ib_name_lower})
        set(ib_source_abs "${CMAKE_CURRENT_SOURCE_DIR}/${base_dir}/${ib_rel}")
        get_filename_component(ib_dir_rel ${ib_rel} DIRECTORY)
        set(ib_refl_abs
            "${CMAKE_CURRENT_BINARY_DIR}/${base_dir}/${ib_dir_rel}/${ib_name}.hpp"
        )
        list(APPEND ib_refls_abs ${ib_refl_abs})
        get_filename_component(ib_refl_dir_abs ${ib_refl_abs} DIRECTORY)
        file(MAKE_DIRECTORY ${ib_refl_dir_abs})
        add_custom_command(
            OUTPUT ${ib_refl_abs}
            COMMAND RealShadersGenTool
                    -t ${ib_type} -n ${ib_name}
                    "$<LIST:TRANSFORM,${target_includes},PREPEND,--inc=>"
                    --namespace ${cpp_namespace} -o ${ib_refl_abs}
                    ${ib_source_abs}
            DEPENDS ${ib_source_abs}
            COMMENT "Reflecting interface block: ${ib_rel}"
            VERBATIM
            COMMAND_EXPAND_LISTS
        )
    endforeach()

    # Add custom target which reflect the shaders
    set(shader_target "${target}_ReflectIBs")
    add_custom_target(${shader_target} DEPENDS ${ib_refls_abs})
    add_dependencies(${target} ${shader_target})
endfunction()