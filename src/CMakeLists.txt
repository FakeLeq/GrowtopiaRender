project(src LANGUAGES CXX)

file(GLOB X_INCLUDE_FILES
    *.h)

file(GLOB X_SOURCE_FILES
    *.cpp)

add_executable(${PROJECT_NAME}
    ${X_INCLUDE_FILES}
    ${X_SOURCE_FILES}) 

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/)

find_package(cimg REQUIRED)   

target_link_libraries(${PROJECT_NAME} 
    cimg::cimg)  