#ifndef color_hsv_make_beige
#define color_hsv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) 

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
        color_parameter.container() = std::array<float,3>( { 0.166667, 0.102041, 0.960784 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.166667, 0.102041, 0.960784 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.166667, 0.102041, 0.960784 } );
       }

    }
  }

#endif
