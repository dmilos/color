#ifndef color_hsl_make_violet
#define color_hsl_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 76.0563, 72.1569 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0xc1, 0xb8 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0xc2b3, 0xb8b8 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0xc2b4481c, 0xb8b8b8b8 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0xc2b4481cd8569000ull, 0xb8b8b8b8b8b8b800ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 76.0563, 72.1569 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 76.0563, 72.1569 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 76.0563, 72.1569 } );
       }

    }
  }

#endif
