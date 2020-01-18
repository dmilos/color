@rem !/bin/msdos

@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste

@rem  TODO cl /EHsc  -I../src /D%PP2F% akin.cpp

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F%  cmy.cpp
cl /EHsc  -I../../../../src /D%PP2F%  cmyk.cpp
cl /EHsc  -I../../../../src /D%PP2F%  gray.cpp
cl /EHsc  -I../../../../src /D%PP2F%  hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F%  hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F%  rgb.cpp
cl /EHsc  -I../../../../src /D%PP2F%  yiq.cpp
cl /EHsc  -I../../../../src /D%PP2F%  yuv.cpp
