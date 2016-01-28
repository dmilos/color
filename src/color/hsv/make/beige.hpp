#ifndef color_hsv_make_beige
#define color_hsv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 10.2041, 96.0784 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0x1a, 0xf5 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0x1a1f, 0xf5f5 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0x1a1f58d0, 0xf5f5f5f5 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x1a1f58d0fac68600ull, 0xf5f5f5f5f5f5f800ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 10.2041, 96.0784 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 10.2041, 96.0784 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 10.2041, 96.0784 } );
       }

    }
  }

#endif
