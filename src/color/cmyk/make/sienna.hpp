#ifndef color_cmyk_make_sienna
#define color_cmyk_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.4875, 0.71875 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x7c, 0xb7, 0x5f } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x7ccc, 0xb7ff, 0x5f5f } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x7ccccccc, 0xb7ffffff, 0x5f5f5f5f } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x7cccccccccccc800ull, 0xb800000000000000ull, 0x5f5f5f5f5f5f6000ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

    }
  }

#endif
