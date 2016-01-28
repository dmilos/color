#ifndef color_hsv_make_tan
#define color_hsv_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 34.2857, 33.3333, 82.3529 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x18, 0x54, 0xd2 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1861, 0x5554, 0xd2d2 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x18618618, 0x55555554, 0xd2d2d2d2 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1861861861861a00ull, 0x5555555555555000ull, 0xd2d2d2d2d2d2d000ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 34.2857, 33.3333, 82.3529 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 34.2857, 33.3333, 82.3529 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 34.2857, 33.3333, 82.3529 } );
       }

    }
  }

#endif
