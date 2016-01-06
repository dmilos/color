#ifndef color_yuv_make_navy
#define color_yuv_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.5 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x68;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x72e1;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff75bf0eu;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7597bfff0e97ul;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.057, 0.218, -0.0500071 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.057, 0.218, -0.0500071 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.057, 0.218, -0.0500071 } );
       }

    }
  }

#endif
