# Yet another c++ library thats implemets color.

All color class fulfil next very restricted conditions:
- No Virtual function
- No Virtual destructors
- Memory footprint only required data
- - e.g 
```c++
     color::rgb<float> f;//!< This will pack ONLY three consective float in memory 
- Ability to copy class with memcpy, memmove, etc
- Coonversions are fast eas possible.
- - e.g 
```c++
     color::rgb<float>       f;
     color::rgb<std::uint32_t> u;
     f = u; //!< Use conversion from packed uint32_t to float not some generic

[Want to see more](doc/index.html)