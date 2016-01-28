#ifndef color_hsv_make_olive
#define color_hsv_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 100, 50 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0xff, 0x7f } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0xffff, 0x7fff } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0xffffffff, 0x7fffffff } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 100, 50 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 100, 50 } );
       }

      inline
      void olive( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 100, 50 } );
       }

    }
  }

#endif
