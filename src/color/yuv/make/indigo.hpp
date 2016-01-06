#ifndef color_yuv_make_indigo
#define color_yuv_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x61;
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x9aa4;
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff9ab325u;
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff9b08b48c2563ul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.146059, 0.178999, 0.129895 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.146059, 0.178999, 0.129895 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.146059, 0.178999, 0.129895 } );
       }

    }
  }

#endif
