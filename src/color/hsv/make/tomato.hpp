#ifndef color_hsv_make_tomato
#define color_hsv_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 9.13043, 72.1569, 100 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x06, 0xb8, 0xff } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x067e, 0xb8b8, 0xffff } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x067e2519, 0xb8b8b8b8, 0xffffffff } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x067e2519f89467c0ull, 0xb8b8b8b8b8b8b800ull, 0x0000000000000000ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 9.13043, 72.1569, 100 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 9.13043, 72.1569, 100 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 9.13043, 72.1569, 100 } );
       }

    }
  }

#endif
