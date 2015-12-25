#ifndef color_yuv_make_red
#define color_yuv_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0, 0 } ) 

      inline
      void red( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7a;
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x9b89;
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9cdb4cu;
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff9d70da564c8aul;
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.299, -0.147138, 0.615 } );
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.299, -0.147138, 0.615 } );
       }

      inline
      void red( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.299, -0.147138, 0.615 } );
       }

    }
  }

#endif

