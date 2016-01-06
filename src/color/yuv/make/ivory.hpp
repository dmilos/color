#ifndef color_yuv_make_ivory
#define color_yuv_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.941176 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7dde;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8077fdu;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff81387877fe47ul;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.993294, -0.0256471, 0.00588319 } );
       }

    }
  }

#endif
