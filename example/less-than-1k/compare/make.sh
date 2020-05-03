#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../src brighter_rgb.cpp      -o  brighter_rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src darker_rgb.cpp        -o  darker_rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src different_rgb.cpp     -o  different_rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src equal_rgb.cpp         -o  equal_rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src great_or_equal.cpp    -o  great_or_equal
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src great_strict_rgb.cpp  -o  great_strict_rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src less_or_equal.cpp     -o  less_or_equal
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src less_strict.cpp       -o  less_strict
