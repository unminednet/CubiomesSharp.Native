cmake_minimum_required(VERSION 3.5)
project(cubiomessharp C)

add_subdirectory(cubiomes)

target_sources(cubiomes PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/cubiomessharp.c)
target_sources(cubiomes_static PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/cubiomessharp.c)
