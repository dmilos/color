Status: Under construction
# Yet another c++ library thats implemets color.

All color classes fulfil next very restricted conditions:
- No Virtual function ( and destructors also )
- Minimal memory footprint
```c
        color::rgb<float>  f;//!< This will pack ONLY three consective floats in memory 
        color::argb<std::uint32_t> u;//!< Just one std::uint32_t for all. 
```

- Ability to copy instances with memcpy, memmove
- Conversions are fast as possible.
```c++
        color::rgb<float>     f;
        color::rgb<uint32>    u;
        color::rgb<double>    d;
        f = u; //!< Perform direct conversion from packed uint32_t to float.
        f = d; //!< Conversion from double to float
        color::hls<uint32>     h;
        h = f; //!< This is the way to convert from RGB to HLS.
```

[Want to see more](doc/index.html)
