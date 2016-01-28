#ifndef color_hsv_make_white
#define color_hsv_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 100 } ) - rgb(255,255,255) - #ffffff

      inline
      void white( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x00, 0xff } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x0000, 0xffff } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x00000000, 0xffffffff } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 100 } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 100 } );
       }

      inline
      void white( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 100 } );
       }

    }
  }

#endif
