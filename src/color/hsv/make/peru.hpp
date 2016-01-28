#ifndef color_hsv_make_peru
#define color_hsv_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 29.5775, 69.2683, 80.3922 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x14, 0xb0, 0xcd } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1508, 0xb152, 0xcdcd } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x150869c3, 0xb153ab14, 0xcdcdcdcd } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x150869c3e7f66300ull, 0xb153ab153ab15000ull, 0xcdcdcdcdcdcdd000ull } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.5775, 69.2683, 80.3922 } );
       }

    }
  }

#endif
