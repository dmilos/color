#ifndef color_yuv_make_fuchsia
#define color_yuv_make_fuchsia

// ::color::make::fuchsia( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0, 1 } ) 

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x52;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x810c;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff834969u;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff83d549f269b9ul;
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.413, 0.288862, 0.514986 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.413, 0.288862, 0.514986 } );
       }

      inline
      void fuchsia( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.413, 0.288862, 0.514986 } );
       }

    }
  }

#endif

