#ifndef color_hsv_make_brown
#define color_hsv_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 74.5455, 64.7059 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0xbe, 0xa5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0xbed5, 0xa5a5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0xbed61bec, 0xa5a5a5a5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0xbed61bed61bed800ull, 0xa5a5a5a5a5a5a800ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 74.5455, 64.7059 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 74.5455, 64.7059 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 74.5455, 64.7059 } );
       }

    }
  }

#endif
