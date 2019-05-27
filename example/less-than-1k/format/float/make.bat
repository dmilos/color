@rem !/bin/msdos

@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste

@rem  TODO cl /EHsc  -I../src akin.cpp

@echo %cd%

cl /EHsc  -I../../../../src  cmy.cpp
cl /EHsc  -I../../../../src  cmyk.cpp
cl /EHsc  -I../../../../src  gray.cpp
cl /EHsc  -I../../../../src  hsl.cpp
cl /EHsc  -I../../../../src  hsv.cpp
cl /EHsc  -I../../../../src  rgb.cpp
cl /EHsc  -I../../../../src  yiq.cpp
cl /EHsc  -I../../../../src  yuv.cpp
