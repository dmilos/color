@rem !/bin/msdos
@
@echo %cd%
@
@cl /EHsc  -I../../src /D%PP2F% memfill.cpp
@
@cd akin
@call make.bat
@cd ..
@
@cd get
@call make.bat
@cd ..
@
@cd operation
@call make.bat
@cd ..
@
@cd place
@call make.bat
@cd ..