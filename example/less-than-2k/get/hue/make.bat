@rem !/bin/msdos
@
@echo %cd%
@
@cl /EHsc  -I../../../../src /D%PP2F% rgb.cpp
@
@cd akin
@call make.bat
@cd ..
