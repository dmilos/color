@rem !/bin/msdos
@
@echo %cd%
@
@cl /EHsc  -I../../src memfill.cpp
@
@cd akin
@call make.bat
@cd ..
