#ifndef color_hsl_make_plum
#define color_hsl_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 47.2868, 74.7059 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x78, 0xbe } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x790d, 0xbf3e } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x790de437, 0xbf3f3f3e } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x790de43790de4c00ull, 0xbf3f3f3f3f3f4000ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 47.2868, 74.7059 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 47.2868, 74.7059 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 47.2868, 74.7059 } );
       }

    }
  }

#endif
