#ifndef color_xyz_make_coral
#define color_xyz_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7b;
       }

      inline
      void coral( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbcdb;
       }

      inline
      void coral( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc14dfau;
       }

      inline
      void coral( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc32d505afeb6ul;
       }

      inline
      void coral( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 22.5746, 18.7259, 9.95901 } );
       }

      inline
      void coral( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 22.5746, 18.7259, 9.95901 } );
       }

      inline
      void coral( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 22.5746, 18.7259, 9.95901 } );
       }

    }
  }

#endif
