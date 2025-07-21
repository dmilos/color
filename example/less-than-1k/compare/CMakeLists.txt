#cmake_minimum_required(VERSION 3.0)

include_directories( "../src" )


add_executable(  ColorExample__compare_brighter_rgb       brighter_rgb.cpp     )
add_executable(  ColorExample__compare_darker_rgb         darker_rgb.cpp       )
add_executable(  ColorExample__compare_different_rgb      different_rgb.cpp    )
add_executable(  ColorExample__compare_equal_rgb          equal_rgb.cpp        )
add_executable(  ColorExample__compare_great_or_equal     great_or_equal.cpp   )
add_executable(  ColorExample__compare_great_strict_rgb   great_strict_rgb.cpp )
add_executable(  ColorExample__compare_less_or_equal      less_or_equal.cpp    )
add_executable(  ColorExample__compare_less_strict        less_strict.cpp      )


