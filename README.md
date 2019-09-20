# Yet another c++ library that implements color.

### Description
 - Yet another c++ library that implements color conversion and manipulation.

### Key features:
- No _virtual_ functions
- Minimal memory footprint
- Ability to copy _array_/_vector_ of colors with _memcpy_, _memmove_ and initialize with _memset_.
- Conversions from/to different models ( and its formats ).
- Headers only
  - One file to include to start the fun
  - By using _del_ or _rm_ it is reducible in to only two of them.
- No third parties
- No additional binaries
- Out of the box ready
  - No need to recompile or start some install process.
- Color models:
  - GRAY,
  - RGB, CMY, CMYK,
  - HSI, HSL, HSV, HWB,
  - YIQ, YUV(BT.601, BT.709), YCgCo, YPbPr(BT.601, BT.709, BT.2020),
  - XYZ( sRGB, D65, 2° ), LAB( CIE, Hunter), LUV, LMS( von Kries D65, von Kries E, BFD, MCAT02 ), xyY, LabCH, LuvCH


### Code sample - Initialization:
```c++
// Initialize with constant.
color::bgr<std::uint8_t>  b( ::color::constant::aqua_t{} );

//!< Use x11 green.
color::yiq<std::uint8_t>  y( ::color::constant::x11::green_t{} );

// Use intuitive/natural values for initialization.
// hue goes from 0 to 360, saturation and value from 0 to 100.
color::hsv<double>        h( { 120.0, 50.0, 60.0 } );

// Lightens will goes from 0 to 100. a and b from -127 to 127.
color::lab<float>         l( { 50.0, -10, 90 } );

// Well known rgb. Values are between 0 and 1.
color::rgb<float>         r( { 0.5, 0, 0.9 } );
```

### Code sample - Conversion:
```c++
// any model/format to any model/format by use of operator=

b = r; //!< Reformat and convert.
r = b; //!< Reformat and convert in opposite direction.
h = b; //!< Reformat and convert from bgr<std::uint8_t> to hsv<double>
h = y; //!< Reformat and convert from yiq<std::uint8_t> to hsv<double>
l = y; //!< Reformat and convert from yiq<std::uint8_t> to lab<float>
```

### Code sample - Feature Extraction:
```c++
color::rgb<std::uint8_t>  r = ::color::constant::aqua_t{};
::color::get::red( r ); //!< Extract red

color::yiq<std::uint8_t>  y = ::color::constant::orange_t{};
::color::get::red( y ); //!< Extract red
```

### Code sample - Distance:
```c++
using namespace std;
using namespace color;
using namespace color::operation;
using namespace color::constant;
using namespace color::constant::distance;

rgb<uint8_t>  r0 = aqua_t{};
rgb<uint8_t>  r1 = turquoise_t{};
yiq<uint8_t>  y  = orange_t{};

cout << distance< euclid_entity  >( r0, r1 ) << endl;
cout << distance< CIE76_entity >( r0, y ) << endl;
cout << distance< CIE94_graphics_entity >( r0, y ) << endl;
cout << distance< CIE94_textile_entity >( r0, y ) << endl;
cout << distance< CIEDE2000_entity >( r0, y ) << endl;
cout << distance< CMC1984_entity >( r0, y, 1, 2 ) << endl;
cout << distance< delta_gray_entity >( r0, r1 ) << endl;
```

### Code sample - Blending:
```c++
color::yiq<std::uint8_t>  y1 = ::color::constant::turquoise_t{};
color::yiq<std::uint8_t>  y2 = ::color::constant::orange_t{};
color::yiq<std::uint8_t>  yr;

::color::operation::blend(  y1, 0.1, y2 ); //!< Blend two colors for given alpha. Accumulation style.
yr = color::operation::mix( y2, 0.5, y2 ); //!< Blend two colors for given alpha. return style.
```

### Install:
1. Clone this Repository: \
  Examples:
    - Windows : git clone https://github.com/dmilos/color.git c:\my-work-folder\my-git-folder\color
    - Linux   : git clone https://github.com/dmilos/color.git /home/my-user-name/my-work-folder/my-git-folder/color
2. Inform compiler where to find headers: \
  Examples:
   - MSVC : /Ic:\my-work-folder\my-git-folder\color\src
   - gcc  : -I/home/my-user-name/my-work-folder/my-git-folder/color/src

### Want to see more:
  - [HTML Documentation ](doc/index.html)
  - [Wiki page](https://github.com/dmilos/color/wiki)

### Tested against:
  - GCC 7.3.0
  - GCC 7.4.0
  - MSVC 2015 Update 3
  - MSVC 2017 15.9.14
  - MSVC 2019 16.3.3

### License
Licensed under an [Apache-2.0](https://github.com/dmilos/color/blob/master/license.txt) license.
