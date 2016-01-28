#ifndef color_hsv_make_khaki
#define color_hsv_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 54, 41.6667, 94.1176 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x26, 0x6a, 0xf0 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2666, 0x6aaa, 0xf0f0 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x26666666, 0x6aaaaaaa, 0xf0f0f0f0 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2666666666666600ull, 0x6aaaaaaaaaaaa800ull, 0xf0f0f0f0f0f0f000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 54, 41.6667, 94.1176 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 54, 41.6667, 94.1176 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 54, 41.6667, 94.1176 } );
       }

    }
  }

#endif
