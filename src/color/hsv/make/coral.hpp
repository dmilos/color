#ifndef color_hsv_make_coral
#define color_hsv_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 16.5217, 69, 100 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0b, 0xaf, 0xff } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0bbf, 0xb0a3, 0xffff } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0bbfb0d9, 0xb0a3d709, 0xffffffff } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0bbfb0d9a96e1180ull, 0xb0a3d70a3d70a000ull, 0x0000000000000000ull } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 16.5217, 69, 100 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 16.5217, 69, 100 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 16.5217, 69, 100 } );
       }

    }
  }

#endif
