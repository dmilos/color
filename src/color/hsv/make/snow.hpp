#ifndef color_hsv_make_snow
#define color_hsv_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.980392, 0.980392 } ) 

      inline
      void snow( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc0;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfc00;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff0500u;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff05050000ul;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.0196078, 1 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.0196078, 1 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.0196078, 1 } );
       }

    }
  }

#endif
