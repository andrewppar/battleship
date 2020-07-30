cmake_minimum_required(VERSION 3.5)
project("battleship")

# Add the cmake folder so the FindSphinx module is found
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

add_subdirectory("battleship")
add_subdirectory("demo")
add_subdirectory("docs")
