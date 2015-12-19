Status: Under construction
# Yet another c++ library that implements color.

All color classes fulfils next very restricted conditions:
- No Virtual function ( and destructor also )
- Minimal memory footprint
- Ability to copy instances with memcpy, memmove
- Conversions from different types( and its formats ) are fast as possible.
 
Code sample:
```c++
        color::rgb<float>     f; //!< This will pack ONLY three consecutive floats in memory 
        color::rgb<std::uint32_t>    u; //!< Just one std::uint32_t for all. 
        color::rgb<double>    d;
        f = u; //!< Perform direct conversion from packed uint32_t to float.
        f = d; //!< Conversion from double to float
        color::hls<std::uint32_t>     h;
        h = f; //!< This is the way how to convert from RGB(float) to HLS(std::uint32_t).
```

Implemented Conversions:
> | l = r | cmy  | cmyk | gray | hsl  | hsv  | rgb  | xyz  | yiq  | yuv  |
> |-------|------|------|------|------|------|------|------|------|------|
> | cmy   | 101% | 100% | 100% |      |      | 100% |      |      |      |
> | cmyk  | 100% | 101% |      |      |      | 100% |      |      |      |
> | gray  | 100% |      | 101% |      |      | 100% |      |      |      |
> | hsl   |      |      |      | 101% |      | 100% |      |      |      |
> | hsv   |      |      |      |      | 101% |      |      |      |      |
> | rgb   | 100% | 100% | 100% | 100% |      | 101% | 100% | 100% | 100% |
> | xyz   |      |      |      |      |      | 100% | 101% |      |      |
> | yiq   |      |      |      |      |      | 100% |      | 101% |      |
> | yuv   |      |      |      |      |      | 100% |      |      | 101% |


Library it self
- Headers only
- No third parties
- One file to include

[Want to see more](doc/index.html)
