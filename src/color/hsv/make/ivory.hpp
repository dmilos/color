#ifndef color_hsv_make_ivory
#define color_hsv_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 5.88235, 100 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0x0f, 0xff } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0x0f0f, 0xffff } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0x0f0f0f0f, 0xffffffff } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x0f0f0f0f0f0f1000ull, 0x0000000000000000ull } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 5.88235, 100 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 5.88235, 100 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 5.88235, 100 } );
       }

    }
  }

#endif
