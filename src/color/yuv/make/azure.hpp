#ifndef color_yuv_make_azure
#define color_yuv_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.982412, 0.00865516, -0.0361765 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfa, 0x82, 0x77 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfb7e, 0x8289, 0x7877 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfb7f565f, 0x828a7c9d, 0x78787877 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfb7f56609e0eb800ull, 0x828a7c9e2277f800ull, 0x7878787878787400ull } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.982412, 0.00865516, -0.0361765 } );
       }

    }
  }

#endif
