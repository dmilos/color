#ifndef color_xyz_make_teal
#define color_xyz_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007f7f

      inline
      void teal( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2;
       }

      inline
      void teal( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc50c;
       }

      inline
      void teal( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd0506fu;
       }

      inline
      void teal( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd346534770deul;
       }

      inline
      void teal( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 8.14218, 13.1397, 15.9651 } );
       }

      inline
      void teal( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 8.14218, 13.1397, 15.9651 } );
       }

      inline
      void teal( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 8.14218, 13.1397, 15.9651 } );
       }

    }
  }

#endif
