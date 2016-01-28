#ifndef color_hsv_make_moccasin
#define color_hsv_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 38.1081, 29.0196, 100 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1a, 0x49, 0xff } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1b19, 0x4a49, 0xffff } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1b195e8e, 0x4a4a4a49, 0xffffffff } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1b195e8efdb19700ull, 0x4a4a4a4a4a4a4800ull, 0x0000000000000000ull } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 38.1081, 29.0196, 100 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 38.1081, 29.0196, 100 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 38.1081, 29.0196, 100 } );
       }

    }
  }

#endif
