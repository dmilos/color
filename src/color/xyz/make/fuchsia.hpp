#ifndef color_xyz_make_fuchsia
#define color_xyz_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #ff00ff

      inline
      void fuchsia( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3b;
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8018;
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff920ee2u;
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff98150f5fe61eul;
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 22.0318, 5.99009, 31.6108 } );
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 22.0318, 5.99009, 31.6108 } );
       }

      inline
      void fuchsia( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 22.0318, 5.99009, 31.6108 } );
       }

    }
  }

#endif
