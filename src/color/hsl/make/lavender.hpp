#ifndef color_hsl_make_lavender
#define color_hsl_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa4;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xee94;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff0a9aau;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff0f0aaa9aaaaul;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240, 66.6667, 94.1176 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240, 66.6667, 94.1176 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240, 66.6667, 94.1176 } );
       }

    }
  }

#endif
