#ifndef color_yuv_make_turquoise
#define color_yuv_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x24;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3235;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3092aeu;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff30fd9311af04ul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.683671, 0.0649648, -0.379607 } );
       }

    }
  }

#endif
