#ifndef color_xyz_make_turquoise
#define color_xyz_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x76;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x88c1;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff985024u;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff9cd6551b27ccul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 17.8308, 24.4816, 26.065 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 17.8308, 24.4816, 26.065 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 17.8308, 24.4816, 26.065 } );
       }

    }
  }

#endif
