#ifndef color_xyz_make_plum
#define color_xyz_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x97;
       }

      inline
      void plum( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xceaa;
       }

      inline
      void plum( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffddc875u;
       }

      inline
      void plum( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe237cc8e7a67ul;
       }

      inline
      void plum( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 25.3049, 21.4675, 27.5964 } );
       }

      inline
      void plum( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 25.3049, 21.4675, 27.5964 } );
       }

      inline
      void plum( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 25.3049, 21.4675, 27.5964 } );
       }

    }
  }

#endif
