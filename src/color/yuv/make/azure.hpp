#ifndef color_yuv_make_azure
#define color_yuv_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x75fe;
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7782fau;
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff78778289fb7eul;
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

    }
  }

#endif
