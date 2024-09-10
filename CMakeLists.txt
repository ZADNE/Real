cmake_minimum_required(VERSION 3.24)
project(Real)

include("cmake/RealProject/RealProject.cmake")
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)
include("cmake/IncludeSDL2WithPrefix.cmake")

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_VS_JUST_MY_CODE_DEBUGGING ON)

# Add subdirectories with projects
file(GLOB REAL_SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} LIST_DIRECTORIES true "*")
foreach(item ${REAL_SUBDIRS})
    if (IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${item}" AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${item}/CMakeLists.txt")
        message("Real: adding subdirectory ${item}")
        add_subdirectory(${item})
    endif()
endforeach()