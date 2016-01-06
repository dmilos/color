#ifndef color_yuv_make_tomato
#define color_yuv_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x93;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcd51;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffcf578eu;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd09657848f02ul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.558635, -0.137888, 0.387217 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.558635, -0.137888, 0.387217 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.558635, -0.137888, 0.387217 } );
       }

    }
  }

#endif
