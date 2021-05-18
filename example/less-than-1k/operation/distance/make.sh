#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src CIE76.cpp           -o CIE76
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cie94g.cpp          -o cie94g
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cie94t.cpp          -o cie94t
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src CIEDE2000.cpp       -o CIEDE2000
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src CMC1984.cpp         -o CMC1984
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src euclid.cpp          -o euclid
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp            -o gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src delta_gray.cpp      -o delta_gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hue_euclid.cpp      -o hue_euclid
