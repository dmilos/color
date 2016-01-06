#ifndef color_cmyk_make_lavender
#define color_cmyk_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x11;
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x5001414u;
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x5050000147a147aul;
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.08, 0.08, 0, 0.0196078 } );
       }

    }
  }

#endif
