cmake_minimum_required(VERSION 3.28)

project(modules-example)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/contrib/nlohmann-json)

file(GLOB_RECURSE src_files 
  "${CMAKE_CURRENT_SOURCE_DIR}/src/common/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
file(GLOB_RECURSE module_files 
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cppm" 
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.ixx")
add_executable(app ${src_files} ${module_files})

target_sources(app PRIVATE
    FILE_SET all_my_modules TYPE CXX_MODULES
    BASE_DIRS
    ${PROJECT_SOURCE_DIR}
    FILES
    ${module_files}
)