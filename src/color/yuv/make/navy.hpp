#ifndef color_yuv_make_navy
#define color_yuv_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 0.5 } ) 

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x8;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf4c1;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff4370eu;
       }

      inline
      void navy( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff33337ce0e97ul;
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

