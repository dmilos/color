#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src rgb_acos.cpp  -o  rgb_acos
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_atan2.cpp -o  rgb_atan2
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_hex.cpp   -o  rgb_hex
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_polar.cpp -o  rgb_polar
g++ -fexceptions -std=c++11 -g -I../../../../src hsi.cpp       -o  hsi
g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp       -o  hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp       -o  hsv
g++ -fexceptions -std=c++11 -g -I../../../../src hwb.cpp       -o  hwb