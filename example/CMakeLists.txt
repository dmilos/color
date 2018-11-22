#
# CMake file for color
#

# c++11
if (CMAKE_VERSION VERSION_LESS "3.1")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set (CMAKE_CXX_FLAGS "--std=c++11 ${CMAKE_CXX_FLAGS}")
  elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set (CMAKE_CXX_FLAGS "--std=c++11 ${CMAKE_CXX_FLAGS}")
  endif ()
else ()
  set (CMAKE_CXX_STANDARD 11)
endif ()

add_executable (akin akin.cpp)
add_executable (get_alpha get_alpha.cpp)
add_executable (memfill memfill.cpp)
add_executable (place place.cpp)
add_executable (readme readme.cpp)
add_executable (set_green set_green.cpp)
add_executable (set_red set_red.cpp)

add_subdirectory (less-than-1k)
