#ifndef color_hsl_make_orchid
#define color_hsl_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x65;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa25a;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa496d6u;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa5a496c0d6f0ul;
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 302.264, 58.8889, 64.7059 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 302.264, 58.8889, 64.7059 } );
       }

      inline
      void orchid( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 302.264, 58.8889, 64.7059 } );
       }

    }
  }

#endif
