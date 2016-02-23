#ifndef color_xyz_make_moccasin
#define color_xyz_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.709804 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x23;
       }

      inline
      void moccasin( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf7ff;
       }

      inline
      void moccasin( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff01201du;
       }

      inline
      void moccasin( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff056f25a8231cul;
       }

      inline
      void moccasin( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.0289, 29.085, 22.723 } );
       }

      inline
      void moccasin( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.0289, 29.085, 22.723 } );
       }

      inline
      void moccasin( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.0289, 29.085, 22.723 } );
       }

    }
  }

#endif
