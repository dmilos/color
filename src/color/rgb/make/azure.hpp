#ifndef color_rgb_make_azure
#define color_rgb_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 240.0/255.0, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xfe;
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfffb;
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfffffff0u;
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffffffffff0f0ul;
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240.0/255.0, 1, 1 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240.0/255.0, 1, 1 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240.0/255.0, 1, 1 } );
       }

    }
  }

#endif
