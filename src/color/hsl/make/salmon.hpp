#ifndef color_hsl_make_salmon
#define color_hsl_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 47.2869, 74.7059 } ) - rgb(221,160,221) - #dda0dd

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x78, 0xbe } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x790d, 0xbf3e } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x790df427, 0xbf3f4234 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x790df4280f04f000ull, 0xbf3f42352eb5f000ull } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 47.2869, 74.7059 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 47.2869, 74.7059 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 47.2869, 74.7059 } );
       }

    }
  }

#endif
