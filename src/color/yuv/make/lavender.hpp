#ifndef color_yuv_make_lavender
#define color_yuv_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7e1c;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7d89e8u;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7e5d8a09e92ful;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.910902, 0.0341961, -0.00784426 } );
       }

    }
  }

#endif
