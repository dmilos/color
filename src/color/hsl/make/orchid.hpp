#ifndef color_hsl_make_orchid
#define color_hsl_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 302.264, 58.8889, 64.7059 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd6, 0x96, 0xa4 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd6f0, 0x96c0, 0xa5a4 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd6f18269, 0x96c16c16, 0xa5a5a5a4 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd6f1826a439f6800ull, 0x96c16c16c16c0800ull, 0xa5a5a5a5a5a5a000ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 302.264, 58.8889, 64.7059 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 302.264, 58.8889, 64.7059 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 302.264, 58.8889, 64.7059 } );
       }

    }
  }

#endif
