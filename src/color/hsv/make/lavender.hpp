#ifndef color_hsv_make_lavender
#define color_hsv_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x84;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf454;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfffa14aau;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffafa147aaaaaul;
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240, 8, 98.0392 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240, 8, 98.0392 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240, 8, 98.0392 } );
       }

    }
  }

#endif
