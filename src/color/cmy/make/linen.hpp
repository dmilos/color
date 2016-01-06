#ifndef color_cmy_make_linen
#define color_cmy_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1820;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff180f05u;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff19180f0f0505ul;
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

    }
  }

#endif
