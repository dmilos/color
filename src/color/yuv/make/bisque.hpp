#ifndef color_yuv_make_bisque
#define color_yuv_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.911471, -0.070293, 0.0776685 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe8, 0x6a, 0x8f } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe955, 0x6b5c, 0x9029 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe95622ee, 0x6b5d0f9f, 0x902a46c2 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe95622efbc896000ull, 0x6b5d0fa0184b2000ull, 0x902a46c2ed4a0800ull } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.911471, -0.070293, 0.0776685 } );
       }

    }
  }

#endif
