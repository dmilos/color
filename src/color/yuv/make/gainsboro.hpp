#ifndef color_yuv_make_gainsboro
#define color_yuv_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.86, 0.86, 0.86 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7dfa;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7fdbu;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7fffdc28ul;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.86, -5.55112e-17, -1.11022e-16 } );
       }

    }
  }

#endif
