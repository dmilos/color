# Yet another c++ library that implements color.
###Status:
- Documentation
 - Examples coverage: ~90%
 - HTML coverage: ~80%
- All planed functionality implemented
- Ready for test use

###Description
 - Yet another c++ library that implements color conversion and manipulation.

###Key features:
- No _virtual_ functions
- Minimal memory footprint
- Ability to copy _array_/_vector_ of colors with _memcpy_, _memmove_ and initialize with _memset_.
- Conversions from/to different types ( and its formats ).
- Headers only
- No third parties
- No additional binaries
- One file to include to start the fun
- Out of the box ready
 - No need to recompile or start some install process.
- Color models: CMY, CMYK, GRAY, HSI, HSL, HSV, RGB, YIQ, YUV(BT.601, BT.709), YCgCo, YPbPr(BT.601, BT.709, BT.2020)

###Code sample:
```c++
color::rgb<::color::type::split655_t>   r;                //!< One std::uint16_t in memory. 6 bits for red, 5 bits for green and 5 bits for blue.
color::bgr<std::uint8_t>  b( ::color::constant::aqua_t{} ); //!< Three consecutive std::uint8_t. Ordered in memory: blue, green and red.
color::yiq<std::uint8_t>  y( { 192, 64, 92 } );           //!< Three consecutive std::uint8_t. Ordered in memory: luma, inphase and quadrature.
color::hsv<double>        h( { 90.0, 50.0, 60.0 } );      //!< This will pack ONLY three consecutive doubles in memory

color::make::orange( r );                 //!< Set 'r' to be orange. Function call style.
y = ::color::constant::turquoise_t{};  //!< Set 'y' to be turquoise. Assign from constant style.

b = r; //!< Reformat and convert.
r = b; //!< Reformat and convert in opposite direction.
h = b; //!< Reformat and convert from BGR to HSV
h = y; //!< Reformat and convert from YIQ to HSV

color::set::red( y, 127 ); //!< Set redness of YIQ

::color::operation::blend( y, 0.1, color::yiq<std::uint8_t>( r ) ); //!< Blend two colors for given alpha. Accumulation style.
b = color::operation::mix( y, 0.5, color::yiq<std::uint8_t>( h ) ); //!< Blend two colors for given alpha. return style.
```

###Install:
1. Clone this Repository:  
 Examples:
  - Windows : git clone https://github.com/dmilos/color.git c:\my-work-folder\my-git-folder\color
  - Linux   : git clone https://github.com/dmilos/color.git /home/my-user-name/my-work-folder/my-git-folder/color
2. Inform compiler where to find headers:  
 Examples:
  - MSVC : /Ic:\my-work-folder\my-git-folder\color\src
  - gcc  : -I/home/my-user-name/my-work-folder/my-git-folder/color/src

###Want to see more:
  - [HTML Documentation ](doc/index.html)
  - [Wiki page](https://github.com/dmilos/color/wiki)

###Tested against:
  - GCC 4.8.4
  - GCC 5.4.0 20160609
  - MSVC 2015 Update 2
  - MSVC 2013 Update 5
