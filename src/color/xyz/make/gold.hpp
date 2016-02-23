#ifndef color_xyz_make_gold
#define color_xyz_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x15;
       }

      inline
      void gold( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xec3;
       }

      inline
      void gold( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0cd93au;
       }

      inline
      void gold( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff0c32ded53ee6ul;
       }

      inline
      void gold( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 23.9914, 27.5217, 0.269215 } );
       }

      inline
      void gold( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 23.9914, 27.5217, 0.269215 } );
       }

      inline
      void gold( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 23.9914, 27.5217, 0.269215 } );
       }

    }
  }

#endif
