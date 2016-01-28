#ifndef color_cmyk_make_plum
#define color_cmyk_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.276018, 0 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x46, 0x00, 0x21 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x46a8, 0x0000, 0x2221 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x46a91f46, 0x00000000, 0x22222221 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x46a91f46a91f4800ull, 0x0000000000000000ull, 0x2222222222222000ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.276018, 0, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.276018, 0, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.276018, 0, 0.133333 } );
       }

    }
  }

#endif
