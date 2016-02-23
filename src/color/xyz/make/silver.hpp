#ifndef color_xyz_make_silver
#define color_xyz_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.75, 0.75, 0.75 } ) - rgb(191,191,191) - #bfbfbf

      inline
      void silver( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x2d;
       }

      inline
      void silver( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2863;
       }

      inline
      void silver( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff383838u;
       }

      inline
      void silver( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3ce93ce93ce9ul;
       }

      inline
      void silver( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 23.9476, 23.9476, 23.9476 } );
       }

      inline
      void silver( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 23.9476, 23.9476, 23.9476 } );
       }

      inline
      void silver( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 23.9476, 23.9476, 23.9476 } );
       }

    }
  }

#endif
