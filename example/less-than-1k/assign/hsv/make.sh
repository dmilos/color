#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2cmy.cpp            -o hsv2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2cmyk.cpp           -o hsv2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2gray.cpp           -o hsv2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2hsi.cpp            -o hsv2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2hsl.cpp            -o hsv2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2hsv.cpp            -o hsv2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2hwb.cpp            -o hsv2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lab.cpp            -o hsv2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lab_CIE.cpp        -o hsv2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lab_Hunter.cpp     -o hsv2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2LabCH.cpp          -o hsv2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lms.cpp            -o hsv2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lms_BFD.cpp        -o hsv2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lms_K65.cpp        -o hsv2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lms_KE.cpp         -o hsv2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2lms_MCAT02.cpp     -o hsv2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2luv.cpp            -o hsv2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2LuvCH.cpp          -o hsv2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2rgb.cpp            -o hsv2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2xyy.cpp            -o hsv2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2xyz.cpp            -o hsv2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YCgCo.cpp          -o hsv2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YDbDr.cpp          -o hsv2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2yiq.cpp            -o hsv2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YPbPr.cpp          -o hsv2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YPbPr2020.cpp      -o hsv2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YPbPr601.cpp       -o hsv2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2YPbPr709.cpp       -o hsv2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2yuv.cpp            -o hsv2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2yuv601.cpp         -o hsv2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv2yuv709.cpp         -o hsv2yuv709