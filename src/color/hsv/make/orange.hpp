#ifndef color_hsv_make_orange
#define color_hsv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 39, 100, 100 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1b, 0xff, 0xff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1bbb, 0xffff, 0xffff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1bbbbbbb, 0xffffffff, 0xffffffff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1bbbbbbbbbbbbc00ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 39, 100, 100 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 39, 100, 100 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 39, 100, 100 } );
       }

    }
  }

#endif
