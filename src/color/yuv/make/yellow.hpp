#ifndef color_yuv_make_yellow
#define color_yuv_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x46;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x901b;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9400e1u;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff94d00000e2d0ul;
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.886, -0.436, 0.100014 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.886, -0.436, 0.100014 } );
       }

      inline
      void yellow( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.886, -0.436, 0.100014 } );
       }

    }
  }

#endif
