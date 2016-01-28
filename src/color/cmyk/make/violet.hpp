#ifndef color_cmyk_make_violet
#define color_cmyk_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.453782, 0 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x73, 0x00, 0x10 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x742a, 0x0000, 0x1110 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x742b0673, 0x00000000, 0x11111110 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x742b06742b067800ull, 0x0000000000000000ull, 0x1111111111111000ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.453782, 0, 0.0666667 } );
       }

    }
  }

#endif
