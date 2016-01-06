#ifndef color_yuv_make_salmon
#define color_yuv_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #dda0dd

      inline
      void salmon( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x65;
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x9636;
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9993b9u;
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff99a39448b9eaul;
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.726247, 0.0691005, 0.123193 } );
       }

    }
  }

#endif
