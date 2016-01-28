#ifndef color_hsv_make_cyan
#define color_hsv_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 180, 100, 100 } ) - rgb(0,255,255) - #00ffff

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7f, 0xff, 0xff } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7fff, 0xffff, 0xffff } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x7fffffff, 0xffffffff, 0xffffffff } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 180, 100, 100 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 180, 100, 100 } );
       }

      inline
      void cyan( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 180, 100, 100 } );
       }

    }
  }

#endif
