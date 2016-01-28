#ifndef color_hsv_make_thistle
#define color_hsv_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 11.5741, 84.7059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x1d, 0xd8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x1da1, 0xd8d8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x1da12f68, 0xd8d8d8d8 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x1da12f684bda1200ull, 0xd8d8d8d8d8d8d800ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 11.5741, 84.7059 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 11.5741, 84.7059 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 11.5741, 84.7059 } );
       }

    }
  }

#endif
