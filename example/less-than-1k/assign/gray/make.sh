#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2cmy.cpp          -o  gray2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2cmyk.cpp         -o  gray2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2gray.cpp         -o  gray2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2hsi.cpp          -o  gray2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2hsl.cpp          -o  gray2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2hsv.cpp          -o  gray2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2hwb.cpp          -o  gray2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lab.cpp          -o  gray2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lab_CIE.cpp      -o  gray2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lab_Hunter.cpp   -o  gray2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2labCH.cpp        -o  gray2labCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lms.cpp          -o  gray2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lms_BFD.cpp      -o  gray2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lms_K65.cpp      -o  gray2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lms_KE.cpp       -o  gray2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2lms_MCAT02.cpp   -o  gray2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2luv.cpp          -o  gray2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2LuvCH.cpp        -o  gray2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2rgb.cpp          -o  gray2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2xyy.cpp          -o  gray2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2xyz.cpp          -o  gray2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YCgCo.cpp        -o  gray2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YDbDr.cpp        -o  gray2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2yiq.cpp          -o  gray2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YPbPr.cpp        -o  gray2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YPbPr2020.cpp    -o  gray2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YPbPr601.cpp     -o  gray2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2YPbPr709.cpp     -o  gray2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2yuv.cpp          -o  gray2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2yuv601.cpp       -o  gray2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  gray2yuv709.cpp       -o  gray2yuv709