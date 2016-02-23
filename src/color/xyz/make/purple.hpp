#ifndef color_xyz_make_purple
#define color_xyz_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.5 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1d;
       }

      inline
      void purple( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xc21c;
       }

      inline
      void purple( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffc987f1u;
       }

      inline
      void purple( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffcc0a87aff30ful;
       }

      inline
      void purple( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 11.0159, 2.99505, 15.8054 } );
       }

      inline
      void purple( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 11.0159, 2.99505, 15.8054 } );
       }

      inline
      void purple( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 11.0159, 2.99505, 15.8054 } );
       }

    }
  }

#endif
