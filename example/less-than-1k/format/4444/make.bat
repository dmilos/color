@rem !/bin/msdos

@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste



@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F%  ./abgr.cpp
cl /EHsc  -I../../../../src /D%PP2F%  ./argb.cpp
cl /EHsc  -I../../../../src /D%PP2F%  ./bgra.cpp
cl /EHsc  -I../../../../src /D%PP2F%  ./rgba.cpp
cl /EHsc  -I../../../../src /D%PP2F%  ./cmyk.cpp