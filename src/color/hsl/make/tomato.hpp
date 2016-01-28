#ifndef color_hsl_make_tomato
#define color_hsl_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 9.13043, 100, 63.9216 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x06, 0xfe, 0xa3 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x067e, 0xfffe, 0xa3a3 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x067e2519, 0xfffffffe, 0xa3a3a3a3 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x067e2519f89467c0ull, 0xfffffffffffff800ull, 0xa3a3a3a3a3a3a000ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 9.13043, 100, 63.9216 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 9.13043, 100, 63.9216 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 9.13043, 100, 63.9216 } );
       }

    }
  }

#endif
