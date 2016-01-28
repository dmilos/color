#ifndef color_hsl_make_aquamarine
#define color_hsl_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 159.765, 100, 75 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x71, 0xff, 0xbf } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x719b, 0xffff, 0xbfff } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x719c46f1, 0xffffffff, 0xbfffffff } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x719c46f19c46f000ull, 0x0000000000000000ull, 0xc000000000000000ull } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 159.765, 100, 75 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 159.765, 100, 75 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 159.765, 100, 75 } );
       }

    }
  }

#endif
