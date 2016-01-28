#ifndef color_hsv_make_purple
#define color_hsv_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 100, 50 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0xff, 0x7f } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0xffff, 0x7fff } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0xffffffff, 0x7fffffff } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x0000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 100, 50 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 100, 50 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 100, 50 } );
       }

    }
  }

#endif
