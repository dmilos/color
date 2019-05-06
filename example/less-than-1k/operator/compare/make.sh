#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src equal.cpp                 -o equal
g++ -fexceptions -std=c++11 -g -I../../../../src great.cpp                 -o great
g++ -fexceptions -std=c++11 -g -I../../../../src great_or_equal.cpp        -o great_or_equal
g++ -fexceptions -std=c++11 -g -I../../../../src less.cpp                  -o less
g++ -fexceptions -std=c++11 -g -I../../../../src less_or_equal.cpp         -o less_or_equal
g++ -fexceptions -std=c++11 -g -I../../../../src not_equal.cpp             -o not_equal
