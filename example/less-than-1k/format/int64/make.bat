@rem !/bin/msdos

@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste

@rem  TODO cl /EHsc  -I../src akin.cpp

@echo %cd%

cl /EHsc  -I../../../../src  lab.cpp
