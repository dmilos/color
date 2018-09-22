cmake_minimum_required(VERSION 2.8)

project(testCmake)

#add_subdirectory( "c:/work/code/git/color/src/color" )
#file( GLOB_RECURSE headers "${CMAKE_SOURCE_DIR}/../../src/color/*")
#source_group( TREE ${CMAKE_SOURCE_DIR} FILES ${headers} )

include_directories( "${CMAKE_SOURCE_DIR}/../../../../src")

set( SOURCE  allgray.cpp
             allrgb.cpp
             bound.cpp
             constant.cpp
             conversion.cpp
             convsemi.cpp
             decompose.cpp
             extract.cpp
             get_invoke.cpp
             get_test.cpp
             gray_scale.cpp
             gray_test.cpp
             image.cpp
             main.cpp
             palette.cpp
             place.cpp
             set_invoke.cpp
             sizeof.cpp
             targa.cpp
 )

add_executable( testCmake ${SOURCE} )




