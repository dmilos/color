#ifndef color_yuv_make_moccasin
#define color_yuv_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.709804 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x56;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8d9c;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9063e6u;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff916363d5e79dul;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.904765, -0.0959401, 0.0835517 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.904765, -0.0959401, 0.0835516 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.904765, -0.0959401, 0.0835516 } );
       }

    }
  }

#endif
