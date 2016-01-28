#ifndef color_hsv_make_turquoise
#define color_hsv_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 174, 71.4286, 87.8431 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7b, 0xb6, 0xe0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7bbb, 0xb6da, 0xe0e0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x7bbbbbbb, 0xb6db6db6, 0xe0e0e0e0 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x7bbbbbbbbbbbb800ull, 0xb6db6db6db6db800ull, 0xe0e0e0e0e0e0e000ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 174, 71.4286, 87.8431 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 174, 71.4286, 87.8431 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 174, 71.4286, 87.8431 } );
       }

    }
  }

#endif
