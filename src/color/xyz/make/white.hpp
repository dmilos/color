#ifndef color_xyz_make_white
#define color_xyz_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 1 } ) - rgb(255,255,255) - #ffffff

      inline
      void white( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3f;
       }

      inline
      void white( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8def;
       }

      inline
      void white( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa0a0a0u;
       }

      inline
      void white( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa68da68da68dul;
       }

      inline
      void white( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 31.9301f, 31.9301f, 31.9301f } );
       }

      inline
      void white( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 31.9301, 31.9301, 31.9301 } );
       }

      inline
      void white( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 31.9301, 31.9301, 31.9301 } );
       }

    }
  }

#endif
