#ifndef color_cmyk_make_turquoise
#define color_cmyk_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.714286, 0, 0.0714286 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0xb6, 0x00, 0x12, 0x1f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0xb6da, 0x0000, 0x1249, 0x1f1f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0xb6db6db6, 0x00000000, 0x12492492, 0x1f1f1f1f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0xb6db6db6db6db800ull, 0x0000000000000000ull, 0x1249249249249200ull, 0x1f1f1f1f1f1f2000ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

    }
  }

#endif
