#ifndef color_xyz_make_black
#define color_xyz_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0 } ) - rgb(0,0,0) - #000000

      inline
      void black( ::color::model< ::color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::model< ::color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::model< ::color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff000000u;
       }

      inline
      void black( ::color::model< ::color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000000000000ul;
       }

      inline
      void black( ::color::model< ::color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 0 } );
       }

      inline
      void black( ::color::model< ::color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 0 } );
       }

      inline
      void black( ::color::model< ::color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 0 } );
       }

    }
  }

#endif
