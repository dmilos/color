#ifndef color_hsv_make_aquamarine
#define color_hsv_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 159.765, 50, 100 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x71, 0x7f, 0xff } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x719b, 0x7fff, 0xffff } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x719c46f1, 0x7fffffff, 0xffffffff } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x719c46f19c46f000ull, 0x8000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 159.765, 50, 100 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 159.765, 50, 100 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 159.765, 50, 100 } );
       }

    }
  }

#endif
