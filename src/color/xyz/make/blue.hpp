#ifndef color_xyz_make_blue
#define color_xyz_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7;
       }

      inline
      void blue( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8023;
       }

      inline
      void blue( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff920f20u;
       }

      inline
      void blue( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff98150f60214ful;
       }

      inline
      void blue( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 6.38603f, 0.339417f, 31.6108f } );
       }

      inline
      void blue( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 6.38603, 0.339417, 31.6108 } );
       }

      inline
      void blue( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 6.38603, 0.339417, 31.6108 } );
       }

    }
  }

#endif
