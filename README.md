# Yet another c++ library thats implemets color.

All color classes fulfil next very restricted conditions:
- No Virtual function ( and destructors also )
- Minimal memory footprint
```c
        color::rgb<float>f;//!< This will pack ONLY three consective floats in memory 
```

- Ability to copy instances with memcpy, memmove
- Coonversions are fast as possible.
```c++
        color::rgb<float>         f;
        color::rgb<std::uint32_t> u;
        color::rgb<double>        d;
        f = u; //!< Perform direct conversion from packed uint32_t to float.
        f = d; //!< Conversion from double to float
```

[Want to see more](doc/index.html)