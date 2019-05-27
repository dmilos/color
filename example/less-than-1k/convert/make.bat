@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src cmy2cmy.cpp
cl /EHsc  -I../../../src cmy2cmyk.cpp
cl /EHsc  -I../../../src cmy2gray.cpp
cl /EHsc  -I../../../src cmy2hsl.cpp
cl /EHsc  -I../../../src cmy2hsv.cpp
cl /EHsc  -I../../../src cmy2rgb.cpp
cl /EHsc  -I../../../src cmy2yiq.cpp
cl /EHsc  -I../../../src cmy2yuv.cpp
cl /EHsc  -I../../../src gray2cmy.cpp
cl /EHsc  -I../../../src gray2rgb.cpp
cl /EHsc  -I../../../src rgb2cmy.cpp
cl /EHsc  -I../../../src rgb2cmyk.cpp
cl /EHsc  -I../../../src rgb2gray.cpp
cl /EHsc  -I../../../src rgb2hsl.cpp
cl /EHsc  -I../../../src rgb2hsv.cpp
cl /EHsc  -I../../../src rgb2rgb.cpp
cl /EHsc  -I../../../src rgb2yiq.cpp
cl /EHsc  -I../../../src rgb2yuv.cpp
