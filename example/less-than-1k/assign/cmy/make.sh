#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2cmy.cpp            -o cmy2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2cmyk.cpp           -o cmy2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2gray.cpp           -o cmy2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2hsi.cpp            -o cmy2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2hsl.cpp            -o cmy2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2hsv.cpp            -o cmy2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2hwb.cpp            -o cmy2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lab.cpp            -o cmy2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lab_CIE.cpp        -o cmy2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lab_Hunter.cpp     -o cmy2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2LabCH.cpp          -o cmy2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lms.cpp            -o cmy2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lms_BFD.cpp        -o cmy2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lms_K65.cpp        -o cmy2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lms_KE.cpp         -o cmy2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2lms_MCAT02.cpp     -o cmy2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2luv.cpp            -o cmy2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2LuvCH.cpp          -o cmy2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2rgb.cpp            -o cmy2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2xyy.cpp            -o cmy2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2xyz.cpp            -o cmy2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YCgCo.cpp          -o cmy2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YDbDr.cpp          -o cmy2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2yiq.cpp            -o cmy2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YPbPr.cpp          -o cmy2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YPbPr2020.cpp      -o cmy2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YPbPr601.cpp       -o cmy2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2YPbPr709.cpp       -o cmy2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2yuv.cpp            -o cmy2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2yuv601.cpp         -o cmy2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy2yuv709.cpp         -o cmy2yuv709