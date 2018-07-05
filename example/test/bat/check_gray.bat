echo off
set  left_folder=..\out\gray
set  right_folder=..\..\..\..\mirror\example\test\out\gray
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe

%program_TC% %left_folder%\gray.tga         %right_folder%\gray.tga         %target_folder%\gray.tga
%program_TC% %left_folder%\hsl-l.tga        %right_folder%\hsl-l.tga        %target_folder%\hsl-l.tga
%program_TC% %left_folder%\hsv-v.tga        %right_folder%\hsv-v.tga        %target_folder%\hsv-v.tga
%program_TC% %left_folder%\lab-l.tga        %right_folder%\lab-l.tga        %target_folder%\lab-l.tga
%program_TC% %left_folder%\lms-l.tga        %right_folder%\lms-l.tga        %target_folder%\lms-l.tga
%program_TC% %left_folder%\luv-l.tga        %right_folder%\luv-l.tga        %target_folder%\luv-l.tga
%program_TC% %left_folder%\satur-hsi.tga    %right_folder%\satur-hsi.tga    %target_folder%\satur-hsi.tga
%program_TC% %left_folder%\satur-hsl.tga    %right_folder%\satur-hsl.tga    %target_folder%\satur-hsl.tga
%program_TC% %left_folder%\satur-hsv.tga    %right_folder%\satur-hsv.tga    %target_folder%\satur-hsv.tga
%program_TC% %left_folder%\xyy-Y.tga        %right_folder%\xyy-Y.tga        %target_folder%\xyy-Y.tga
%program_TC% %left_folder%\xyz-y.tga        %right_folder%\xyz-y.tga        %target_folder%\xyz-y.tga
%program_TC% %left_folder%\yiq-y.tga        %right_folder%\yiq-y.tga        %target_folder%\yiq-y.tga
%program_TC% %left_folder%\YPbPr2020-y.tga  %right_folder%\YPbPr2020-y.tga  %target_folder%\YPbPr2020-y.tga
%program_TC% %left_folder%\YPbPr601-y.tga   %right_folder%\YPbPr601-y.tga   %target_folder%\YPbPr601-y.tga
%program_TC% %left_folder%\YPbPr709-y.tga   %right_folder%\YPbPr709-y.tga   %target_folder%\YPbPr709-y.tga
%program_TC% %left_folder%\yuv601-y.tga     %right_folder%\yuv601-y.tga     %target_folder%\yuv601-y.tga
%program_TC% %left_folder%\yuv709-y.tga     %right_folder%\yuv709-y.tga     %target_folder%\yuv709-y.tga

pause