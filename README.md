# Yet another c++ library thats implemets color.

All color classes fulfil next very restricted conditions:
- No Virtual function ( and destructors also )
- Minimal memory footprint
```c
        color::rgb_float  f;//!< This will pack ONLY three consective floats in memory 
        color::argb_uint32 u;//!< Just one uint32_t for all. 
```

- Ability to copy instances with memcpy, memmove
- Coonversions are fast as possible.
```c++
        color::rgb_float     f;
        color::rgb_uint32    u;
        color::rgb_double    d;
        f = u; //!< Perform direct conversion from packed uint32_t to float.
        f = d; //!< Conversion from double to float
        color::hls_uint32     h;
        h = f; //!< And this will convert correctly.
```

[Want to see more](doc/index.html)