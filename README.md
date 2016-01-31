# Yet another c++ library that implements color.
Status: Very close to the first milestone.

Key features:
- No _virtual_ functions
- Minimal memory footprint
- Ability to copy _array_/_vector_ of colours with _memcpy_, _memmove_, initialize with _memset_.
- Conversions from/to different types ( and its formats ).
- Headers only
- No third parties
- No additional binaries
- One file to include to start the fun
- Out of the box ready
 - No need to recompile or start some install process.
- Color models: CMY, CMYK, GRAY, HSL, HSV, RGB, XYZ, YIQ, YUV.

Code sample:
```c++
        color::rgb<float>         f( { 1.0, 0.55, 0.0 } ); //!< This will pack ONLY three consecutive floats in memory
        color::rgb<std::uint8_t>  u( { 127,  255, 212 } ); //!< Three consecutive std::uint8_t.

        f = u; //!< Perform direct conversion from uint8_t to float.

        color::rgb<double>        d( { 0.1, 0.2, 0.3  } );

        f = d; //!< Reformat RGB from double to float
        u = f; //!< Reformat RGB from float to uint8_t

        color::hsl<std::uint8_t>  h( { 192, 64, 92  } );

        h = f; //!< This is the way how to convert from RGB(float) to HSL(std::uint8_t).
```

Implemented Conversions:
> | l = r | cmy  | cmyk | gray | hsl  | hsv  | rgb  | xyz  | yiq  | yuv  |
> |-------|------|------|------|------|------|------|------|------|------|
> | cmy   | :white_check_mark: |  :white_check_mark: |  :white_check_mark: | :white_check_mark: | :white_check_mark: |  :white_check_mark: |      | :white_check_mark: | :white_check_mark: |
> | cmyk  | :white_check_mark: |  :white_check_mark: |  :white_check_mark: |      |      |  :white_check_mark: |      |      |      |
> | gray  | :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |      |  :white_check_mark: |  :white_check_mark: |
> | hsl   | :white_check_mark: |      |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |      |      |      |
> | hsv   | :white_check_mark: |      |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |      |      |      |
> | rgb   | :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: |  :white_check_mark: | :white_check_mark: |  :white_check_mark: |
> | xyz   |      |      |      |      |      |  :white_check_mark: |  :white_check_mark: |      |      |
> | yiq   | :white_check_mark: |      |  :white_check_mark: |      |      |  :white_check_mark: |      |  :white_check_mark: |      |
> | yuv   | :white_check_mark: |      | :white_check_mark: |      |      |  :white_check_mark: |      |      |  :white_check_mark: |

Available Color Formats
> <dl>
> <dt>bool</dt>
>     <dd> Each component is one bool.</dd>
> <dt>uint8_t</dt>
>     <dd> Each component will be type uint8_t. Usual color storing precision.</dd>
> <dt>uint16_t</dt>
>     <dd> Each component will be type uint16_t. For more precision.</dd>
> <dt>uint32_t</dt>
>     <dd> Each component will be type uint32_t. For higher.</dd>
> <dt>uint64_t</dt>
>     <dd> Each component will be type uint64_t.For the highest precision in unsigned format.</dd>
> <dt>float</dt>
>     <dd> Each component will be type float.</dd>
> <dt>double</dt>
>     <dd> Each component will be type double.</dd>
> <dt>long double</dt>
>     <dd> Each component will be type long double. Best precision of all.</dd>
> </dl>


[Want to see more](doc/index.html)

