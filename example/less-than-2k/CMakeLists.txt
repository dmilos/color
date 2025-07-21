#cmake_minimum_required(VERSION 2.8)


add_subdirectory( akin )
add_subdirectory( get )
add_subdirectory( opencv )
add_subdirectory( operation )
add_subdirectory( place )

add_executable(  ColorExample__less-than-2k__memfill    memfill.cpp )


