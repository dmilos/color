#ifndef color_xyz_make_snow
#define color_xyz_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.980392, 0.980392 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x37;
       }

      inline
      void snow( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x758d;
       }

      inline
      void snow( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff848992u;
       }

      inline
      void snow( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8a2f8f349815ul;
       }

      inline
      void snow( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 31.6108, 31.4148, 31.3041 } );
       }

      inline
      void snow( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 31.6108, 31.4148, 31.304 } );
       }

      inline
      void snow( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 31.6108, 31.4148, 31.304 } );
       }

    }
  }

#endif
