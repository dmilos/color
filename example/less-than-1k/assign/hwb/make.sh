#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2cmy.cpp            -o hwb2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2cmyk.cpp           -o hwb2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2gray.cpp           -o hwb2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2hsi.cpp            -o hwb2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2hsl.cpp            -o hwb2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2hsv.cpp            -o hwb2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2hwb.cpp            -o hwb2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lab.cpp            -o hwb2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lab_CIE.cpp        -o hwb2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lab_Hunter.cpp     -o hwb2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2LabCH.cpp          -o hwb2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lms.cpp            -o hwb2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lms_BFD.cpp        -o hwb2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lms_K65.cpp        -o hwb2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lms_KE.cpp         -o hwb2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2lms_MCAT02.cpp     -o hwb2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2luv.cpp            -o hwb2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2LuvCH.cpp          -o hwb2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2rgb.cpp            -o hwb2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2xyy.cpp            -o hwb2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2xyz.cpp            -o hwb2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YCgCo.cpp          -o hwb2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YDbDr.cpp          -o hwb2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2yiq.cpp            -o hwb2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YPbPr.cpp          -o hwb2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YPbPr2020.cpp      -o hwb2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YPbPr601.cpp       -o hwb2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2YPbPr709.cpp       -o hwb2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2yuv.cpp            -o hwb2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2yuv601.cpp         -o hwb2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb2yuv709.cpp         -o hwb2yuv709