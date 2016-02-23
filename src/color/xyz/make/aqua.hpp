#ifndef color_xyz_make_aqua
#define color_xyz_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00ffff

      inline
      void aqua( ::color::model< ::color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8e19;
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa0a1deu;
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa68da68ee1bdul;
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 16.2844, 26.2795, 31.9301 } );
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 16.2844, 26.2795, 31.9301 } );
       }

      inline
      void aqua( ::color::model< ::color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 16.2844, 26.2795, 31.9301 } );
       }

    }
  }

#endif
