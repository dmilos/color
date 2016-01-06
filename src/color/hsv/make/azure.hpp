#ifndef color_hsv_make_azure
#define color_hsv_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc3;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfc2f;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff0f7fu;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff0f0f7ffful;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 180, 5.88235, 100 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 180, 5.88235, 100 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 180, 5.88235, 100 } );
       }

    }
  }

#endif
