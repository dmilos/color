#ifndef color_cmyk_make_snow
#define color_cmyk_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.0196078, 0.0196078 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x05, 0x05, 0x00 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x0505, 0x0505, 0x0000 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x05050505, 0x05050505, 0x00000000 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x0505050505050800ull, 0x0505050505050800ull, 0x0000000000000000ull } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

    }
  }

#endif
