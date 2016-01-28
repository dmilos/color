#ifndef color_yuv_make_aquamarine
#define color_yuv_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.831276, 4.72801e-05, -0.290635 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd3, 0x7f, 0x43 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd4cd, 0x8003, 0x4382 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd4ce88e6, 0x80038daa, 0x438298df } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd4ce88e71c5be000ull, 0x80038daa8f666000ull, 0x438298dfb8a54400ull } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.831276, 4.72801e-05, -0.290635 } );
       }

    }
  }

#endif
