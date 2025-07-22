#cmake_minimum_required(VERSION 2.8)


add_executable(   ColorExample__less-than-1k__get__yellow__yuv   cmy.cpp  )
add_executable(   ColorExample__less-than-1k__get__yellow__yiq   cmyk.cpp )
add_executable(   ColorExample__less-than-1k__get__yellow__rgb   gray.cpp )
add_executable(   ColorExample__less-than-1k__get__yellow__hsv   hsl.cpp  )
add_executable(   ColorExample__less-than-1k__get__yellow__hsl   hsv.cpp  )
add_executable(   ColorExample__less-than-1k__get__yellow__gray  rgb.cpp  )
add_executable(   ColorExample__less-than-1k__get__yellow__cmyk  yiq.cpp  )
add_executable(   ColorExample__less-than-1k__get__yellow__cmy   yuv.cpp  )
