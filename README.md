Status: Under construction
# Yet another c++ library thats implements color.

All color classes fulfill next very restricted conditions:
- No Virtual function ( and destructor also )
- Minimal memory footprint
```c
        color::rgb<float>  f;//!< This will pack ONLY three consecutive floats in memory 
        color::argb<std::uint32_t> u;//!< Just one std::uint32_t for all. 
```
- Ability to copy instances with memcpy, memmove
- Conversions from different types( and its formats ) are fast as possible.
```c++
        color::rgb<float>     f;
        color::rgb<std::uint32_t>    u;
        color::rgb<double>    d;
        f = u; //!< Perform direct conversion from packed uint32_t to float.
        f = d; //!< Conversion from double to float
        color::hls<std::uint32_t>     h;
        h = f; //!< This is the way how to convert from RGB to HLS.
```

Library it self
- Headers only
- No third parties
- One file to include

[Want to see more](doc/index.html)
