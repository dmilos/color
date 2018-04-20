# Yet another c++ library that implements color.

### Status:
- Ready for use
- Documentation
  - Examples coverage: ~90%
  - HTML coverage: ~90%

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
  - XYZ( sRGB, D65, 2° ), LAB, LUV, LMS( von Kries D65, von Kries E, BFD, MCAT02 ), xyY, LabCH, LuvCH


### Code sample - Initialization:
```c++

// Three consecutive std::uint8_t. Ordered in memory: blue, green and red.
// Initialize to some predefined and well known color.
color::bgr<std::uint8_t>  b( ::color::constant::aqua_t{} );

// Three consecutive std::uint8_t. Ordered in memory: luma, inphase and quadrature.
// Use intuitive and natural values for initialization. All goes from 0 to 255.
color::yiq<std::uint8_t>  y( { 192, 64, 92 } );

// This will pack ONLY three consecutive doubles in memory. First hue, then saturation and the last is value.
// Use intuitive/natural values for initialization. hue goes from 0 to 360, saturation and value from 0 to 100.
color::hsv<double>        h( { 90.0, 50.0, 60.0 } );

// This will pack ONLY three consecutive floats in memory.
// Lightens will goes from 0 to 100. a and b from -128 to 128. and may goes beyond those values.
color::lab<float>         l( { 50.0, 0, 0 } );
```

### Code sample - Conversion:
```c++
y = ::color::constant::turquoise_t{};  //!< Set 'y' to be turquoise.

// any model/format to any model/format by use of operator=
b = r; //!< Reformat and convert.
r = b; //!< Reformat and convert in opposite direction.
h = b; //!< Reformat and convert from BGR to HSV
h = y; //!< Reformat and convert from YIQ to HSV
l = y; //!< Reformat and convert from YIQ to LAB
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
  - GCC 4.8.4
  - GCC 5.4.0 20160609
  - MSVC 2017 (15.3.2)
  - MSVC 2015 Update 3
  - -MSVC 2013 Update 5-







