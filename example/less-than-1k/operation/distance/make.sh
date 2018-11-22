#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src CIE76.cpp           -o CIE76
g++ -fexceptions -std=c++11 -g -I../../../../src cie94g.cpp          -o cie94g
g++ -fexceptions -std=c++11 -g -I../../../../src cie94t.cpp          -o cie94t
g++ -fexceptions -std=c++11 -g -I../../../../src CIEDE2000.cpp       -o CIEDE2000
g++ -fexceptions -std=c++11 -g -I../../../../src CMC1984.cpp         -o CMC1984
g++ -fexceptions -std=c++11 -g -I../../../../src euclid.cpp          -o euclid
g++ -fexceptions -std=c++11 -g -I../../../../src gray.cpp            -o gray
