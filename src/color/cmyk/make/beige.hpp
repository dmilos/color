#ifndef color_cmyk_make_beige
#define color_cmyk_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.102041 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x00, 0x1a, 0x09 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x0000, 0x1a1f, 0x0a09 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x00000000, 0x1a1f58d0, 0x0a0a0a09 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0x1a1f58d0fac68600ull, 0x0a0a0a0a0a0a0800ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0, 0.102041, 0.0392157 } );
       }

    }
  }

#endif
