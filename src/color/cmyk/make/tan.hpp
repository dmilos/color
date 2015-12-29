#ifndef color_cmyk_make_tan
#define color_cmyk_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) 

      inline
      void tan( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2d542400;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2420;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff542400u;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff555424920000ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.142857, 0.333333, 0.176471 } );
       }

    }
  }

#endif
