#ifndef color_yuv_make_sienna
#define color_yuv_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x52;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa56c;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa95f65u;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffaa2b6036657ful;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.396486, -0.10827, 0.20263 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.396486, -0.10827, 0.20263 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.396486, -0.10827, 0.20263 } );
       }

    }
  }

#endif
