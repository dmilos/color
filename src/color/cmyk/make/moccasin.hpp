#ifndef color_cmyk_make_moccasin
#define color_cmyk_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.105882, 0.290196 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x1a, 0x49, 0x00 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x1b1a, 0x4a49, 0x0000 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x1b1b1b1a, 0x4a4a4a49, 0x00000000 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x1b1b1b1b1b1b1800ull, 0x4a4a4a4a4a4a4800ull, 0x0000000000000000ull } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.105882, 0.290196, 0 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.105882, 0.290196, 0 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.105882, 0.290196, 0 } );
       }

    }
  }

#endif
