#ifndef color_hsv_make_beige
#define color_hsv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x81;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf065;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff51a2au;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff5f51a1f2aaaul;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 10.2041, 96.0784 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 10.2041, 96.0784 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 10.2041, 96.0784 } );
       }

    }
  }

#endif
