#ifndef color_yuv_make_gold
#define color_yuv_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x45;
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa038;
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa40dcau;
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa5a00d4dcb3dul;
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.793922, -0.390688, 0.180796 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.793922, -0.390688, 0.180796 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.793922, -0.390688, 0.180796 } );
       }

    }
  }

#endif
