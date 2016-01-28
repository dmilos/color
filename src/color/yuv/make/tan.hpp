#ifndef color_yuv_make_tan
#define color_yuv_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.723176, -0.0857025, 0.0880415 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb8, 0x66, 0x91 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb921, 0x66d6, 0x9252 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb92217d9, 0x66d6f2af, 0x9252f691 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb92217da69c5f000ull, 0x66d6f2afa6fbf000ull, 0x9252f691c6baa800ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.723176, -0.0857025, 0.0880415 } );
       }

    }
  }

#endif
