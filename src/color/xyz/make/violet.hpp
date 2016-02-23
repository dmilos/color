#ifndef color_xyz_make_violet
#define color_xyz_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       }

      inline
      void violet( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x28ec;
       }

      inline
      void violet( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3a5183u;
       }

      inline
      void violet( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3ffc54648830ul;
       }

      inline
      void violet( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 25.6092, 18.8151, 29.6662 } );
       }

      inline
      void violet( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 25.6092, 18.8151, 29.6662 } );
       }

      inline
      void violet( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 25.6092, 18.8151, 29.6662 } );
       }

    }
  }

#endif
