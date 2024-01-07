cmake_minimum_required(VERSION 3.0.0)
project(cxxsource VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_library(cxxsource 
    sublib1/subsource1.cpp
    sublib2/subsrouce2.cpp
    )
target_include_directories(${PROJECT_NAME} PUBLIC               #public header files
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
