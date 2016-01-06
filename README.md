# Yet another c++ library that implements color.
Status: Very close to the first milestone.

All color classes fulfils next very restricted conditions:
- No Virtual function ( and destructor also )
- Minimal memory footprint
- Ability to copy array of instances with memcpy, memmove, initialize with memset.
- Conversions from different types ( and its formats ).

Code sample:
```c++
        color::rgb<float>          f; //!< This will pack ONLY three consecutive floats in memory
        color::rgb<std::uint32_t>  u; //!< Just one std::uint32_t for all.

        f = u; //!< Perform direct conversion from packed uint32_t to float.

        color::rgb<double>         d( { 0.1, 0.2, 0.3  } );

        f = d; //!< Reformat RGB from double to float
        u = f; //!< Reformat RGB from float to packed uint32_t

        color::hsl<std::uint32_t>     h( { 192, 64, 92  } );

        h = f; //!< This is the way how to convert from RGB(float) to HSL(std::uint32_t).
```

Available color models: CMY, CMYK, GRAY, HSL, HSV, RGB, XYZ, YIQ, YUV

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
>     <dd> All components occupy 8 bit. First take 3 bits, second 3, third 2. Designed for three component colors.</dd>
> <dt>uint16_t</dt>
>     <dd> All components occupy 16 bit. First take 6 bits, second 5, third 5. Designed for three component colors.</dd>
> <dt>uint32_t</dt>
>     <dd> All components occupy 32 bit. Each component take 8 bits, If model require only 3 component, most significant 8 bits will be wasted space.</dd>
> <dt>uint64_t</dt>
>     <dd> All components occupy 64 bit. Each component take 16 bits, If model require 3 component, most significant  16 bits will be wasted space.</dd>
> <dt>float</dt>
>     <dd> Each component will be type float.</dd>
> <dt>double</dt>
>     <dd> Each component will be type double.</dd>
> <dt>long double</dt>
>     <dd> Each component will be type long double.</dd>
> </dl>

Library it self
- Headers only
- No third parties
- No additional binaries
- One file to include to start the fun

[Want to see more](doc/index.html)

