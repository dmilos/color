#ifndef color_hsv_make_gold
#define color_hsv_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 50.5882, 100, 100 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x23, 0xff, 0xff } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x23f9, 0xffff, 0xffff } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x23f94ea3, 0xffffffff, 0xffffffff } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x23f94ea3f94ea400ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 50.5882, 100, 100 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 50.5882, 100, 100 } );
       }

      inline
      void gold( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 50.5882, 100, 100 } );
       }

    }
  }

#endif
