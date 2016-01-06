#ifndef color_cmyk_make_turquoise
#define color_cmyk_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x110a;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x1f1200b6u;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x1f1f12490000b6daul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.714286, 0, 0.0714286, 0.121569 } );
       }

    }
  }

#endif
