#ifndef color_xyz_make_lavender
#define color_xyz_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1c;
       }

      inline
      void lavender( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x73c0;
       }

      inline
      void lavender( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff83142au;
       }

      inline
      void lavender( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff890d19f02f6cul;
       }

      inline
      void lavender( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.3006, 28.8263, 31.279 } );
       }

      inline
      void lavender( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.3006, 28.8263, 31.279 } );
       }

      inline
      void lavender( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.3006, 28.8263, 31.279 } );
       }

    }
  }

#endif
