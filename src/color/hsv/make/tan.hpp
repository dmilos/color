#ifndef color_hsv_make_tan
#define color_hsv_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) 

      inline
      void tan( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x90;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcd42;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd25418u;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd2d255541861ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0952381, 0.333333, 0.823529 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0952381, 0.333333, 0.823529 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0952381, 0.333333, 0.823529 } );
       }

    }
  }

#endif
