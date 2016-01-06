#ifndef color_yuv_make_linen
#define color_yuv_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x81dd;
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8578f1u;
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff85d57948f2cbul;
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.948431, -0.0228681, 0.0280398 } );
       }

    }
  }

#endif
