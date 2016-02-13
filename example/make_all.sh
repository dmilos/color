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

g++ -fexceptions -std=c++11 -g -I../src get_red.cpp                 -o  get_red
g++ -fexceptions -std=c++11 -g -I../src get_green.cpp               -o  get_green
g++ -fexceptions -std=c++11 -g -I../src get_blue.cpp                -o  get_blue
g++ -fexceptions -std=c++11 -g -I../src get_gray.cpp                -o  get_gray

g++ -fexceptions -std=c++11 -g -I../src set_red.cpp                 -o  set_red
g++ -fexceptions -std=c++11 -g -I../src set_green.cpp               -o  set_green
g++ -fexceptions -std=c++11 -g -I../src set_blue.cpp                -o  set_blue
g++ -fexceptions -std=c++11 -g -I../src set_gray.cpp                -o  set_gray
