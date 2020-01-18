@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src /D%PP2F% cmy2cmy.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2cmyk.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2gray.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2hsl.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2hsv.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2yiq.cpp
cl /EHsc  -I../../../src /D%PP2F% cmy2yuv.cpp
cl /EHsc  -I../../../src /D%PP2F% gray2cmy.cpp
cl /EHsc  -I../../../src /D%PP2F% gray2rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2cmy.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2cmyk.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2gray.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2hsl.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2hsv.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2yiq.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb2yuv.cpp
