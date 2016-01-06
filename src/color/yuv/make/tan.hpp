#ifndef color_yuv_make_tan
#define color_yuv_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x55;
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x9196;
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9166b8u;
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff925266d6b921ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

    }
  }

#endif
