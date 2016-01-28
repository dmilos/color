#ifndef color_hsv_make_lavender
#define color_hsv_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 240, 8, 98.0392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xaa, 0x14, 0xfa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaaaa, 0x147a, 0xfafa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaaaaaaaa, 0x147ae147, 0xfafafafa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaaaaaaaaaaaaa800ull, 0x147ae147ae147700ull, 0xfafafafafafaf800ull } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240, 8, 98.0392 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240, 8, 98.0392 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240, 8, 98.0392 } );
       }

    }
  }

#endif
