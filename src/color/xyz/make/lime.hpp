#ifndef color_xyz_make_lime
#define color_xyz_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void lime( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdd6;
       }

      inline
      void lime( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0e92beu;
       }

      inline
      void lime( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0e77972dc06eul;
       }

      inline
      void lime( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 9.89834, 25.94, 0.319301 } );
       }

      inline
      void lime( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 9.89834, 25.94, 0.319301 } );
       }

      inline
      void lime( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 9.89834, 25.94, 0.319301 } );
       }

    }
  }

#endif
