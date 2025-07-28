cmake_minimum_required(VERSION 3.27)
project(Real)

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_VS_JUST_MY_CODE_DEBUGGING ON)

if (GENERATOR_IS_MULTI_CONFIG)
    message(FATAL_ERROR "Using ${CMAKE_GENERATOR} which is multi-config generator. "
                        "Multi-config generators are not supported by RealEngine. "
                        "Use -G CMake CLI option to select a different generator.")
endif()

if (IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/RealEngine")
    # Build RealEngine from source
    add_subdirectory("RealEngine")
else()
    # Find installed RealEngine
    find_package(RealEngine 2.0.0 CONFIG REQUIRED)
endif()

# Add subdirectories with projects
file(GLOB REAL_SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} LIST_DIRECTORIES true "*")
foreach(item ${REAL_SUBDIRS})
    if (NOT ${item} STREQUAL "RealEngine" AND
        IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${item}" AND
        EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${item}/CMakeLists.txt"
       )
        message("Real: adding subdirectory ${item}")
        add_subdirectory(${item})
    endif()
endforeach()