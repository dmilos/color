cmake_minimum_required(VERSION 2.8)

project(testColor)

set( directory__root "${CMAKE_SOURCE_DIR}/../../../.." )

set( directory_include          "${directory__root}/src" )
set( directory_example_test     "${directory__root}/example/test" )

#Internal variables
set( hpp_file_list    "./hpp.lst.txt" )
set( cpp_file_list    "./cpp.lst.txt" )

file( GLOB_RECURSE SOURCE_HPP "${directory_include}/color/*")
source_group( TREE "${directory_include}/color/" PREFIX "Header Files\\color" FILES ${SOURCE_HPP} )

set( cpp_file_list    "./cpp.lst.txt" ) 
file( STRINGS ${cpp_file_list} FILE_LIST )
foreach(file_item IN LISTS FILE_LIST )
  list( APPEND SOURCE_CPP "${directory_example_test}/${file_item}")
endforeach(file_item)

source_group( TREE "${directory_example_test}" FILES ${SOURCE_CPP} )

include_directories( "${directory_include}")

add_executable( testCmake ${SOURCE_CPP} ${SOURCE_HPP} )
