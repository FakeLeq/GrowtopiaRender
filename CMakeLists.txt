set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PROJECT_TOP_LEVEL_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/conan/cmake-conan/conan_provider.cmake)  

cmake_minimum_required(VERSION 3.22)
project(GrowtopiaRender VERSION 1.0.0)  

#add_subdirectory(3rdparty)
add_subdirectory(src)    