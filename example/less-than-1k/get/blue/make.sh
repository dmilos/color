#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src cmy.cpp     -o  cmy
g++ -fexceptions -std=c++11 -g -I../../../../src cmyk.cpp    -o  cmyk
g++ -fexceptions -std=c++11 -g -I../../../../src gray.cpp    -o  gray
g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp     -o  hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp     -o  hsv
g++ -fexceptions -std=c++11 -g -I../../../../src rgb.cpp     -o  rgb
g++ -fexceptions -std=c++11 -g -I../../../../src yiq.cpp     -o  yiq
g++ -fexceptions -std=c++11 -g -I../../../../src yuv.cpp     -o  yuv
