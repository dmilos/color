#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../src cmy2cmy.cpp      -o  cmy2cmy
g++ -fexceptions -std=c++11 -g -I../../../src cmy2cmyk.cpp     -o  cmy2cmyk
g++ -fexceptions -std=c++11 -g -I../../../src cmy2gray.cpp     -o  cmy2gray
g++ -fexceptions -std=c++11 -g -I../../../src cmy2hsl.cpp      -o  cmy2hsl
g++ -fexceptions -std=c++11 -g -I../../../src cmy2hsv.cpp      -o  cmy2hsv
g++ -fexceptions -std=c++11 -g -I../../../src cmy2rgb.cpp      -o  cmy2rgb
g++ -fexceptions -std=c++11 -g -I../../../src cmy2yiq.cpp      -o  cmy2yiq
g++ -fexceptions -std=c++11 -g -I../../../src cmy2yuv.cpp      -o  cmy2yuv
g++ -fexceptions -std=c++11 -g -I../../../src gray2cmy.cpp     -o  gray2cmy
g++ -fexceptions -std=c++11 -g -I../../../src gray2rgb.cpp     -o  gray2rgb
g++ -fexceptions -std=c++11 -g -I../../../src rgb2cmy.cpp      -o  rgb2cmy
g++ -fexceptions -std=c++11 -g -I../../../src rgb2cmyk.cpp     -o  rgb2cmyk
g++ -fexceptions -std=c++11 -g -I../../../src rgb2gray.cpp     -o  rgb2gray
g++ -fexceptions -std=c++11 -g -I../../../src rgb2hsl.cpp      -o  rgb2hsl
g++ -fexceptions -std=c++11 -g -I../../../src rgb2hsv.cpp      -o  rgb2hsv
g++ -fexceptions -std=c++11 -g -I../../../src rgb2rgb.cpp      -o  rgb2rgb
g++ -fexceptions -std=c++11 -g -I../../../src rgb2yiq.cpp      -o  rgb2yiq
g++ -fexceptions -std=c++11 -g -I../../../src rgb2yuv.cpp      -o  rgb2yuv
