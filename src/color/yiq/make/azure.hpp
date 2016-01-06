#ifndef color_yiq_make_azure
#define color_yiq_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x79de;
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7c78fau;
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7cf37878fb7eul;
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

    }
  }

#endif
