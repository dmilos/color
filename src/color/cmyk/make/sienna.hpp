#ifndef color_cmyk_make_sienna
#define color_cmyk_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) 

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5fb77c00;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x5a70;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb77c00u;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb7ff7ccc0000ul;
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.4875, 0.71875, 0.372549 } );
       }

    }
  }

#endif
