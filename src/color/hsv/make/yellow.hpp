#ifndef color_hsv_make_yellow
#define color_hsv_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 100, 100 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0xff, 0xff } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0xffff, 0xffff } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0xffffffff, 0xffffffff } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 100, 100 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 100, 100 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 100, 100 } );
       }

    }
  }

#endif
