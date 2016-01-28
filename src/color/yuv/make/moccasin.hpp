#ifndef color_yuv_make_moccasin
#define color_yuv_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.904765, -0.0959401, 0.0835516 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe6, 0x63, 0x90 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe79d, 0x63d5, 0x9163 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe79ea8e5, 0x63d58818, 0x9163bd93 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe79ea8e656fad800ull, 0x63d5881890c39c00ull, 0x9163bd93f22a6000ull } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.904765, -0.0959401, 0.0835517 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.904765, -0.0959401, 0.0835516 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.904765, -0.0959401, 0.0835516 } );
       }

    }
  }

#endif
