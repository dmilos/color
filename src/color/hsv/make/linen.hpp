#ifndef color_hsv_make_linen
#define color_hsv_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x80;
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf442;
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfffa1415u;
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffafa147a1555ul;
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 30, 8, 98.0392 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 30, 8, 98.0392 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 30, 8, 98.0392 } );
       }

    }
  }

#endif
