#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src cmy.cpp        -o   cmy
g++ -fexceptions -std=c++11 -g -I../../../../src cmyk.cpp       -o   cmyk
g++ -fexceptions -std=c++11 -g -I../../../../src gray.cpp       -o   gray
g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp        -o   hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp        -o   hsv
g++ -fexceptions -std=c++11 -g -I../../../../src lab.cpp        -o   lab
g++ -fexceptions -std=c++11 -g -I../../../../src lms.cpp        -o   lms
g++ -fexceptions -std=c++11 -g -I../../../../src luv.cpp        -o   luv

g++ -fexceptions -std=c++11 -g -I../../../../src rgb_average.cpp     -o rgb_average
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_lightness.cpp   -o rgb_lightness
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_middle.cpp      -o rgb_middle
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_yuv709.cpp      -o rgb_yuv709

g++ -fexceptions -std=c++11 -g -I../../../../src YCgCo.cpp      -o   YCgCo
g++ -fexceptions -std=c++11 -g -I../../../../src YDbDr.cpp      -o   YDbDr
g++ -fexceptions -std=c++11 -g -I../../../../src yiq.cpp        -o   yiq
g++ -fexceptions -std=c++11 -g -I../../../../src yuv.cpp        -o   yuv