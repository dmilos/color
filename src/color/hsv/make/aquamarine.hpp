#ifndef color_hsv_make_aquamarine
#define color_hsv_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 1, 0.831373 } ) 

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xdb;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfded;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff7f71u;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff7fff719bul;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443791, 0.5, 1 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443791, 0.5, 1 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443791, 0.5, 1 } );
       }

    }
  }

#endif
