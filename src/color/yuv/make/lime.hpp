#ifndef color_yuv_make_lime
#define color_yuv_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 0 } ) 

      inline
      void lime( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf4;
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8312;
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7db795u;
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7c2bb60e9645ul;
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.587, -0.288862, -0.514986 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.587, -0.288862, -0.514986 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.587, -0.288862, -0.514986 } );
       }

    }
  }

#endif

