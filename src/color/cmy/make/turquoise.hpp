#ifndef color_cmy_make_turquoise
#define color_cmy_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2c77;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2f1fbfu;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff2f2f1f1fbfbful;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.74902, 0.121569, 0.184314 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.74902, 0.121569, 0.184314 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.74902, 0.121569, 0.184314 } );
       }

    }
  }

#endif
