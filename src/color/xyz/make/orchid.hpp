#ifndef color_xyz_make_orchid
#define color_xyz_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa4;
       }

      inline
      void orchid( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa75e;
       }

      inline
      void orchid( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb3e911u;
       }

      inline
      void orchid( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb82eebe915b6ul;
       }

      inline
      void orchid( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 23.0824, 16.5089, 26.6685 } );
       }

      inline
      void orchid( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 23.0824, 16.5089, 26.6685 } );
       }

      inline
      void orchid( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 23.0824, 16.5089, 26.6685 } );
       }

    }
  }

#endif
