#ifndef color_xyz_make_navy
#define color_xyz_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.5 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3;
       }

      inline
      void navy( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc011;
       }

      inline
      void navy( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc90790u;
       }

      inline
      void navy( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffcc0a07b090a7ul;
       }

      inline
      void navy( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 3.19301, 0.169709, 15.8054 } );
       }

      inline
      void navy( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 3.19301, 0.169709, 15.8054 } );
       }

      inline
      void navy( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 3.19301, 0.169709, 15.8054 } );
       }

    }
  }

#endif
