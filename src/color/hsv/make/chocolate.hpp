#ifndef color_hsv_make_chocolate
#define color_hsv_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) 

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb0;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcf42;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd2da11u;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd2d2db6c11c7ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0694444, 0.857143, 0.823529 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0694444, 0.857143, 0.823529 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0694444, 0.857143, 0.823529 } );
       }

    }
  }

#endif
