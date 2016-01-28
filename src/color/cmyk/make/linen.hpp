#ifndef color_cmyk_make_linen
#define color_cmyk_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.04, 0.08 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x0a, 0x14, 0x05 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x0a3d, 0x147a, 0x0505 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x0a3d70a3, 0x147ae147, 0x05050505 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x0a3d70a3d70a3b80ull, 0x147ae147ae147700ull, 0x0505050505050800ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.04, 0.08, 0.0196078 } );
       }

    }
  }

#endif
