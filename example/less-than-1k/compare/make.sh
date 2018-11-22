#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../src brighter_rgb.cpp      -o  brighter_rgb
g++ -fexceptions -std=c++11 -g -I../../../src darker_rgb.cpp        -o  darker_rgb
g++ -fexceptions -std=c++11 -g -I../../../src different_rgb.cpp     -o  different_rgb
g++ -fexceptions -std=c++11 -g -I../../../src equal_rgb.cpp         -o  equal_rgb
g++ -fexceptions -std=c++11 -g -I../../../src great_or_equal.cpp    -o  great_or_equal
g++ -fexceptions -std=c++11 -g -I../../../src great_strict_rgb.cpp  -o  great_strict_rgb
g++ -fexceptions -std=c++11 -g -I../../../src less_or_equal.cpp     -o  less_or_equal
g++ -fexceptions -std=c++11 -g -I../../../src less_strict.cpp       -o  less_strict
