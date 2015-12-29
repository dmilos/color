#ifndef color_cmyk_make_coral
#define color_cmyk_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.5, 0.31 } ) 

      inline
      void coral( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xaf7f00;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa70;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffaf7f00u;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb0a37fff0000ul;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.5, 0.69, 0 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.5, 0.69, 0 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.5, 0.69, 0 } );
       }

    }
  }

#endif
