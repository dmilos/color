#ifndef color_cmy_make_tan
#define color_cmy_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x51;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7125;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff724a2du;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff73724b4a2d2dul;
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.176471, 0.294118, 0.45098 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.176471, 0.294118, 0.45098 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.176471, 0.294118, 0.45098 } );
       }

    }
  }

#endif
