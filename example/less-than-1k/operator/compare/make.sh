#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src equal.cpp                 -o equal
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src great.cpp                 -o great
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src great_or_equal.cpp        -o great_or_equal
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src less.cpp                  -o less
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src less_or_equal.cpp         -o less_or_equal
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src not_equal.cpp             -o not_equal
