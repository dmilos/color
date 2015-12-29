#ifndef color_cmyk_make_snow
#define color_cmyk_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.980392, 0.980392 } ) 

      inline
      void snow( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x50500;
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff050500u;
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff050505050000ul;
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0196078, 0.0196078, 0 } );
       }

    }
  }

#endif
