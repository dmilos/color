# make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paset

g++ -fexceptions -std=c++11 -g -I../src hello.cpp               -o  hello

g++ -fexceptions -std=c++11 -g -I../src convert_rgb2gray.cpp    -o  convert_rgb2gray
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2cmy.cpp     -o  convert_rgb2cmy
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2yiq.cpp     -o  convert_rgb2yiq
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2yuv.cpp     -o  convert_rgb2yuv
g++ -fexceptions -std=c++11 -g -I../src convert_rgb2rgb.cpp     -o  convert_rgb2rgb

g++ -fexceptions -std=c++11 -g -I../src convert_cmy2rgb.cpp     -o  convert_cmy2rgb
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2gray.cpp    -o  convert_cmy2gray
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2cmy.cpp     -o  convert_cmy2cmy
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2cmyk.cpp    -o  convert_cmy2cmyk
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2hsl.cpp     -o  convert_cmy2hsl
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2hsv.cpp     -o  convert_cmy2hsv
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2yiq.cpp     -o  convert_cmy2yiq
g++ -fexceptions -std=c++11 -g -I../src convert_cmy2yuv.cpp     -o  convert_cmy2yuv

g++ -fexceptions -std=c++11 -g -I../src convert_gray2rgb.cpp    -o  convert_gray2rgb
g++ -fexceptions -std=c++11 -g -I../src convert_gray2cmy.cpp    -o  convert_gray2cmy


g++ -fexceptions -std=c++11 -g -I../src ctor_cmy.cpp                    -o  ctor_cmy
g++ -fexceptions -std=c++11 -g -I../src ctor_gray.cpp                   -o  ctor_gray
g++ -fexceptions -std=c++11 -g -I../src ctor_hsl.cpp                    -o  ctor_hsl
g++ -fexceptions -std=c++11 -g -I../src ctor_rgb.cpp                    -o  ctor_rgb
g++ -fexceptions -std=c++11 -g -I../src ctor_yiq.cpp                    -o  ctor_yiq
g++ -fexceptions -std=c++11 -g -I../src ctor_hsv.cpp                    -o  ctor_hsv
g++ -fexceptions -std=c++11 -g -I../src ctor_yuv.cpp                    -o  ctor_yuv
g++ -fexceptions -std=c++11 -g -I../src ctor_yuv.cpp                    -o  ctor_cmyk


g++ -fexceptions -std=c++11 -g -I../src make_red_in_rgb.cpp             -o  make_red_in_rgb
g++ -fexceptions -std=c++11 -g -I../src make_red_in_gray.cpp            -o  make_red_in_gray
g++ -fexceptions -std=c++11 -g -I../src make_red_in_cmy.cpp             -o  make_red_in_cmy

g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_cmy.cpp       -o  extract_gray_from_cmy
g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_cmyk.cpp      -o  extract_gray_from_cmyk
g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_rgb.cpp       -o  extract_gray_from_rgb
g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_hsl.cpp       -o  extract_gray_from_hsl
g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_yuv.cpp       -o  extract_gray_from_yuv
g++ -fexceptions -std=c++11 -g -I../src extract_gray_from_yiq.cpp       -o  extract_gray_from_yiq


#g++ -fexceptions -std=c++11 -g -I../src extract_blue_from_cmy.cpp       -o  extract_blue_from_cmy
#g++ -fexceptions -std=c++11 -g -I../src extract_blue_from_rgb.cpp       -o  extract_blue_from_rgb
#g++ -fexceptions -std=c++11 -g -I../src extract_green_from_cmy.cpp      -o  extract_green_from_cmy
#g++ -fexceptions -std=c++11 -g -I../src extract_green_from_rgb.cpp      -o  extract_green_from_rgb
#g++ -fexceptions -std=c++11 -g -I../src extract_red_from_cmy.cpp        -o  extract_red_from_cmy
#g++ -fexceptions -std=c++11 -g -I../src extract_red_from_rgb.cpp        -o  extract_red_from_rgb
