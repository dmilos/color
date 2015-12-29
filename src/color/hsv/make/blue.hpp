#ifndef color_hsv_make_blue
#define color_hsv_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 1 } ) 

      inline
      void blue( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xfc;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfff4;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffffaau;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffffffffaaaaul;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.666667, 1, 1 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.666667, 1, 1 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.666667, 1, 1 } );
       }

    }
  }

#endif
