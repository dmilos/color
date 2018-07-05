echo off
set  left_folder=..\out\conv-rgb
set  right_folder=..\..\..\..\mirror\example\test\out\conv-rgb
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe

%program_TC% %left_folder%\bgr_double_2bgr.tga      %right_folder%\bgr_double_2bgr.tga         %target_folder%\bgr_double_2bgr.tga
%program_TC% %left_folder%\bgr_float_2bgr.tga       %right_folder%\bgr_float_2bgr.tga          %target_folder%\bgr_float_2bgr.tga
%program_TC% %left_folder%\bgr_ldouble_2bgr.tga     %right_folder%\bgr_ldouble_2bgr.tga        %target_folder%\bgr_ldouble_2bgr.tga
%program_TC% %left_folder%\bgr_split224_2bgr.tga    %right_folder%\bgr_split224_2bgr.tga       %target_folder%\bgr_split224_2bgr.tga
%program_TC% %left_folder%\bgr_split233_2bgr.tga    %right_folder%\bgr_split233_2bgr.tga       %target_folder%\bgr_split233_2bgr.tga
%program_TC% %left_folder%\bgr_split242_2bgr.tga    %right_folder%\bgr_split242_2bgr.tga       %target_folder%\bgr_split242_2bgr.tga
%program_TC% %left_folder%\bgr_split323_2bgr.tga    %right_folder%\bgr_split323_2bgr.tga       %target_folder%\bgr_split323_2bgr.tga
%program_TC% %left_folder%\bgr_split332_2bgr.tga    %right_folder%\bgr_split332_2bgr.tga       %target_folder%\bgr_split332_2bgr.tga
%program_TC% %left_folder%\bgr_split422_2bgr.tga    %right_folder%\bgr_split422_2bgr.tga       %target_folder%\bgr_split422_2bgr.tga
%program_TC% %left_folder%\bgr_split556_2bgr.tga    %right_folder%\bgr_split556_2bgr.tga       %target_folder%\bgr_split556_2bgr.tga
%program_TC% %left_folder%\bgr_split565_2bgr.tga    %right_folder%\bgr_split565_2bgr.tga       %target_folder%\bgr_split565_2bgr.tga
%program_TC% %left_folder%\bgr_split655_2bgr.tga    %right_folder%\bgr_split655_2bgr.tga       %target_folder%\bgr_split655_2bgr.tga
%program_TC% %left_folder%\bgr_uint16_2bgr.tga      %right_folder%\bgr_uint16_2bgr.tga         %target_folder%\bgr_uint16_2bgr.tga
%program_TC% %left_folder%\bgr_uint32_2bgr.tga      %right_folder%\bgr_uint32_2bgr.tga         %target_folder%\bgr_uint32_2bgr.tga
%program_TC% %left_folder%\bgr_uint64_2bgr.tga      %right_folder%\bgr_uint64_2bgr.tga         %target_folder%\bgr_uint64_2bgr.tga
%program_TC% %left_folder%\bgr_uint8_2bgr.tga       %right_folder%\bgr_uint8_2bgr.tga          %target_folder%\bgr_uint8_2bgr.tga
%program_TC% %left_folder%\rgb_double_2rgb.tga      %right_folder%\rgb_double_2rgb.tga         %target_folder%\rgb_double_2rgb.tga
%program_TC% %left_folder%\rgb_float_2rgb.tga       %right_folder%\rgb_float_2rgb.tga          %target_folder%\rgb_float_2rgb.tga
%program_TC% %left_folder%\rgb_ldouble_2rgb.tga     %right_folder%\rgb_ldouble_2rgb.tga        %target_folder%\rgb_ldouble_2rgb.tga
%program_TC% %left_folder%\rgb_split224_2rgb.tga    %right_folder%\rgb_split224_2rgb.tga       %target_folder%\rgb_split224_2rgb.tga
%program_TC% %left_folder%\rgb_split233_2rgb.tga    %right_folder%\rgb_split233_2rgb.tga       %target_folder%\rgb_split233_2rgb.tga
%program_TC% %left_folder%\rgb_split242_2rgb.tga    %right_folder%\rgb_split242_2rgb.tga       %target_folder%\rgb_split242_2rgb.tga
%program_TC% %left_folder%\rgb_split323_2rgb.tga    %right_folder%\rgb_split323_2rgb.tga       %target_folder%\rgb_split323_2rgb.tga
%program_TC% %left_folder%\rgb_split332_2rgb.tga    %right_folder%\rgb_split332_2rgb.tga       %target_folder%\rgb_split332_2rgb.tga
%program_TC% %left_folder%\rgb_split422_2rgb.tga    %right_folder%\rgb_split422_2rgb.tga       %target_folder%\rgb_split422_2rgb.tga
%program_TC% %left_folder%\rgb_split556_2rgb.tga    %right_folder%\rgb_split556_2rgb.tga       %target_folder%\rgb_split556_2rgb.tga
%program_TC% %left_folder%\rgb_split565_2rgb.tga    %right_folder%\rgb_split565_2rgb.tga       %target_folder%\rgb_split565_2rgb.tga
%program_TC% %left_folder%\rgb_split655_2rgb.tga    %right_folder%\rgb_split655_2rgb.tga       %target_folder%\rgb_split655_2rgb.tga
%program_TC% %left_folder%\rgb_uint16_2rgb.tga      %right_folder%\rgb_uint16_2rgb.tga         %target_folder%\rgb_uint16_2rgb.tga
%program_TC% %left_folder%\rgb_uint32_2rgb.tga      %right_folder%\rgb_uint32_2rgb.tga         %target_folder%\rgb_uint32_2rgb.tga
%program_TC% %left_folder%\rgb_uint64_2rgb.tga      %right_folder%\rgb_uint64_2rgb.tga         %target_folder%\rgb_uint64_2rgb.tga
%program_TC% %left_folder%\rgb_uint8_2rgb.tga       %right_folder%\rgb_uint8_2rgb.tga          %target_folder%\rgb_uint8_2rgb.tga

pause