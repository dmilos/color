#ifndef color_xyz_make_azure
#define color_xyz_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.941176, 1, 1 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::model< ::color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3e;
       }

      inline
      void azure( ::color::model< ::color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8daa;
       }

      inline
      void azure( ::color::model< ::color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa09177u;
       }

      inline
      void azure( ::color::model< ::color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa68d977e7cdbul;
       }

      inline
      void azure( ::color::model< ::color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 31.0098, 31.5977, 31.9301 } );
       }

      inline
      void azure( ::color::model< ::color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 31.0098, 31.5977, 31.9301 } );
       }

      inline
      void azure( ::color::model< ::color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 31.0098, 31.5977, 31.9301 } );
       }

    }
  }

#endif
