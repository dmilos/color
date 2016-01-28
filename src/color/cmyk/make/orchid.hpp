#ifndef color_cmyk_make_orchid
#define color_cmyk_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.486239, 0.0183486 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x7b, 0x04, 0x25 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x7c79, 0x04b2, 0x2525 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x7c7a20e0, 0x04b27ed3, 0x25252525 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x7c7a20e177c7a000ull, 0x04b27ed3604b2340ull, 0x2525252525252800ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.486239, 0.0183486, 0.145098 } );
       }

    }
  }

#endif
