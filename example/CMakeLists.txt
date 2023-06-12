cmake_minimum_required(VERSION 3.0)

project(colorCmake)

include_directories( "../src" )

add_subdirectory( less-than-1k )
add_subdirectory( less-than-2k )

add_executable(  ColorExample__get_alpha    get_alpha.cpp )
add_executable(  ColorExample__readme       readme.cpp )
add_executable(  ColorExample__set_green    set_green.cpp )
add_executable(  ColorExample__set_red      set_red.cpp )

