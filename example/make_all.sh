# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO COLOR_USE_PP2FILE

g++ -fexceptions -std=c++11 -g -I../src hello.cpp               -o  hello

g++ -fexceptions -std=c++11 -g -I../src pp2f.cpp               -o  pp2f

g++ -fexceptions -std=c++11 -g -I../src akin.cpp                -o  akin

g++ -fexceptions -std=c++11 -g -I../src assign_const.cpp        -o  assign_const

g++ -fexceptions -std=c++11 -g -I../src convert_rgb2cmy.cpp     -o  convert_rgb2cmy
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2cmyk.cpp    -o  convert_rgb2cmyk
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2gray.cpp    -o  convert_rgb2gray
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2hsl.cpp     -o  convert_rgb2hsl
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2hsv.cpp     -o  convert_rgb2hsv
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2rgb.cpp     -o  convert_rgb2rgb
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2yiq.cpp     -o  convert_rgb2yiq
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2yuv.cpp     -o  convert_rgb2yuv

g++ -fexceptions -std=c++11 -g -I../src convert_cmy2cmy.cpp     -o  convert_cmy2cmy
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2cmyk.cpp    -o  convert_cmy2cmyk
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2gray.cpp    -o  convert_cmy2gray
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2hsl.cpp     -o  convert_cmy2hsl
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2hsv.cpp     -o  convert_cmy2hsv
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2rgb.cpp     -o  convert_cmy2rgb
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2yiq.cpp     -o  convert_cmy2yiq
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2yuv.cpp     -o  convert_cmy2yuv

g++ -fexceptions -std=c++11 -g -I../src convert_gray2rgb.cpp    -o  convert_gray2rgb
g++ -fexceptions -std=c++11 -g -I../src convert_gray2cmy.cpp    -o  convert_gray2cmy

g++ -fexceptions -std=c++11 -g -I../src ctor_list.cpp                -o  ctor_list
g++ -fexceptions -std=c++11 -g -I../src ctor_const.cpp               -o  ctor_const

g++ -fexceptions -std=c++11 -g -I../src get_alpha.cpp               -o  get_alpha

g++ -fexceptions -std=c++11 -g -I../src get_red.cpp                 -o  get_red
g++ -fexceptions -std=c++11 -g -I../src get_green.cpp               -o  get_green
g++ -fexceptions -std=c++11 -g -I../src get_blue.cpp                -o  get_blue
g++ -fexceptions -std=c++11 -g -I../src get_gray.cpp                -o  get_gray

g++ -fexceptions -std=c++11 -g -I../src fix_integrity.cpp           -o  fix_integrity
g++ -fexceptions -std=c++11 -g -I../src fix_overburn.cpp            -o  fix_overburn
g++ -fexceptions -std=c++11 -g -I../src fix_unique.cpp              -o  fix_unique

g++ -fexceptions -std=c++11 -g -I../src format_double.cpp           -o  format_double
g++ -fexceptions -std=c++11 -g -I../src format_float.cpp            -o  format_float
g++ -fexceptions -std=c++11 -g -I../src format_ldouble.cpp          -o  format_ldouble
#g++ -fexceptions -std=c++11 -g -I../src format_split233.cpp         -o  format_split233
g++ -fexceptions -std=c++11 -g -I../src format_split332.cpp         -o  format_split332
g++ -fexceptions -std=c++11 -g -I../src format_split422.cpp         -o  format_split422
g++ -fexceptions -std=c++11 -g -I../src format_split556.cpp         -o  format_split556
g++ -fexceptions -std=c++11 -g -I../src format_split655.cpp         -o  format_split655
g++ -fexceptions -std=c++11 -g -I../src format_split2222.cpp        -o  format_split2222
g++ -fexceptions -std=c++11 -g -I../src format_split4444.cpp        -o  format_split4444
g++ -fexceptions -std=c++11 -g -I../src format_split8888.cpp        -o  format_split8888

g++ -fexceptions -std=c++11 -g -I../src format_splitAAA2.cpp        -o  format_splitAAA2
g++ -fexceptions -std=c++11 -g -I../src format_uint16.cpp           -o  format_uint16
g++ -fexceptions -std=c++11 -g -I../src format_uint32.cpp           -o  format_uint32
g++ -fexceptions -std=c++11 -g -I../src format_uint64.cpp           -o  format_uint64
g++ -fexceptions -std=c++11 -g -I../src format_uint8.cpp            -o  format_uint8


g++ -fexceptions -std=c++11 -g -I../src check_integrity.cpp         -o  check_integrity
g++ -fexceptions -std=c++11 -g -I../src check_overburn.cpp          -o  check_overburn
g++ -fexceptions -std=c++11 -g -I../src check_unique.cpp            -o  check_unique

g++ -fexceptions -std=c++11 -g -I../src set_red.cpp                 -o  set_red
g++ -fexceptions -std=c++11 -g -I../src set_green.cpp               -o  set_green
g++ -fexceptions -std=c++11 -g -I../src set_blue.cpp                -o  set_blue
g++ -fexceptions -std=c++11 -g -I../src set_gray.cpp                -o  set_gray

g++ -fexceptions -std=c++11 -g -I../src compare_brighter.cpp              -o compare_brighter
g++ -fexceptions -std=c++11 -g -I../src compare_darker.cpp                -o compare_darker
g++ -fexceptions -std=c++11 -g -I../src compare_different.cpp             -o compare_different
g++ -fexceptions -std=c++11 -g -I../src compare_equal.cpp                 -o compare_equal
g++ -fexceptions -std=c++11 -g -I../src compare_great_or_equal.cpp        -o compare_great_or_equal
g++ -fexceptions -std=c++11 -g -I../src compare_great_strict.cpp          -o compare_great_strict
g++ -fexceptions -std=c++11 -g -I../src compare_less_or_equal.cpp         -o compare_less_or_equal
g++ -fexceptions -std=c++11 -g -I../src compare_less_strict.cpp           -o compare_less_strict

g++ -fexceptions -std=c++11 -g -I../src make_bisque.cpp       -o make_bisque
g++ -fexceptions -std=c++11 -g -I../src make_gray.cpp         -o make_gray
g++ -fexceptions -std=c++11 -g -I../src make_orange.cpp       -o make_orange
g++ -fexceptions -std=c++11 -g -I../src make_red.cpp          -o make_red

g++ -fexceptions -std=c++11 -g -I../src operation_blend_noalpha.cpp   -o operation_blend_noalpha
g++ -fexceptions -std=c++11 -g -I../src operation_blend_alpha.cpp     -o operation_blend_alpha
g++ -fexceptions -std=c++11 -g -I../src operation_convex.cpp          -o operation_convex
g++ -fexceptions -std=c++11 -g -I../src operation_invert.cpp          -o operation_invert
g++ -fexceptions -std=c++11 -g -I../src operation_mix_alpha.cpp       -o operation_mix_alpha
g++ -fexceptions -std=c++11 -g -I../src operation_mix_noalpha.cpp     -o operation_mix_noalpha

g++ -fexceptions -std=c++11 -g -I../src operator_arithmetic.cpp       -o operator_arithmetic

g++ -fexceptions -std=c++11 -g -I../src place.cpp                     -o place

g++ -fexceptions -std=c++11 -g -I../src trait_bound.cpp               -o trait_bound
g++ -fexceptions -std=c++11 -g -I../src trait_component.cpp           -o trait_component
g++ -fexceptions -std=c++11 -g -I../src trait_container.cpp           -o trait_container
g++ -fexceptions -std=c++11 -g -I../src trait_index.cpp               -o trait_index
g++ -fexceptions -std=c++11 -g -I../src trait_scalar.cpp              -o trait_scalar

g++ -fexceptions -std=c++11 -g -I../src tip_inplace_conversion.cpp    -o  tip_inplace_conversion
g++ -fexceptions -std=c++11 -g -I../src tip_memfill.cpp               -o  tip_memfill
g++ -fexceptions -std=c++11 -g -I../src tip_memset.cpp                -o  tip_memset
