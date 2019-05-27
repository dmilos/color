@rem !/bin/msdos

@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste



@echo %cd%

cl /EHsc  -I../../../../src  ./abgr.cpp
cl /EHsc  -I../../../../src  ./argb.cpp
cl /EHsc  -I../../../../src  ./bgra.cpp
cl /EHsc  -I../../../../src  ./rgba.cpp
cl /EHsc  -I../../../../src  ./cmyk.cpp