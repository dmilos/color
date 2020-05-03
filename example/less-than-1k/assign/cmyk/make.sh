#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2cmy.cpp            -o cmyk2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2cmyk.cpp           -o cmyk2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2gray.cpp           -o cmyk2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2hsi.cpp            -o cmyk2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2hsl.cpp            -o cmyk2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2hsv.cpp            -o cmyk2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2hwb.cpp            -o cmyk2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lab.cpp            -o cmyk2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lab_CIE.cpp        -o cmyk2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lab_Hunter.cpp     -o cmyk2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2LabCH.cpp          -o cmyk2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lms.cpp            -o cmyk2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lms_BFD.cpp        -o cmyk2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lms_K65.cpp        -o cmyk2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lms_KE.cpp         -o cmyk2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2lms_MCAT02.cpp     -o cmyk2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2luv.cpp            -o cmyk2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2LuvCH.cpp          -o cmyk2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2rgb.cpp            -o cmyk2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2xyy.cpp            -o cmyk2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2xyz.cpp            -o cmyk2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YCgCo.cpp          -o cmyk2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YDbDr.cpp          -o cmyk2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2yiq.cpp            -o cmyk2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YPbPr.cpp          -o cmyk2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YPbPr2020.cpp      -o cmyk2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YPbPr601.cpp       -o cmyk2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2YPbPr709.cpp       -o cmyk2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2yuv.cpp            -o cmyk2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2yuv601.cpp         -o cmyk2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk2yuv709.cpp         -o cmyk2yuv709