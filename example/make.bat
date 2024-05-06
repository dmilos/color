@rem !/bin/msdos
@
@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@rem  One line one example
@rem  Designed for easy copy/paste
@
@echo %cd%
@set PP2F=whatever
@rem set PP2F=COLOR_USE_PP2FILE
@
@cl /EHsc /I../src /D%PP2F% /std:c++14 readme.cpp
@cl /EHsc /I../src /D%PP2F% /std:c++17 get_alpha.cpp
@cl /EHsc /I../src /D%PP2F% /std:c++20 set_green.cpp
@cl /EHsc /I../src /D%PP2F%  set_red.cpp
@
@cd ./less-than-1k
@call ./make.bat
@cd ..
@
@cd ./less-than-2k
@call ./make.bat
@cd ..



pause