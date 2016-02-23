#ifndef color_xyz_make_aquamarine
#define color_xyz_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9c;
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa3fe;
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb01e0fu;
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb50f23f5135cul;
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 23.0304, 29.0476, 26.5997 } );
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 23.0304, 29.0476, 26.5997 } );
       }

      inline
      void aquamarine( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 23.0304, 29.0476, 26.5997 } );
       }

    }
  }

#endif
