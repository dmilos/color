#ifndef color_cmyk_make_tan
#define color_cmyk_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.142857, 0.333333 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x24, 0x54, 0x2d } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x2492, 0x5554, 0x2d2d } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x24924924, 0x55555554, 0x2d2d2d2d } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x2492492492491e00ull, 0x5555555555555000ull, 0x2d2d2d2d2d2d3000ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

    }
  }

#endif
