#ifndef color_hsv_make_linen
#define color_hsv_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 30, 8, 98.0392 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x15, 0x14, 0xfa } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1555, 0x147a, 0xfafa } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x15555555, 0x147ae147, 0xfafafafa } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1555555555555500ull, 0x147ae147ae147700ull, 0xfafafafafafaf800ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 30, 8, 98.0392 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 30, 8, 98.0392 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 30, 8, 98.0392 } );
       }

    }
  }

#endif
