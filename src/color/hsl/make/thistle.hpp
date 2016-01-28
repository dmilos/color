#ifndef color_hsl_make_thistle
#define color_hsl_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 300, 24.2718, 79.8039 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd4, 0x3d, 0xcb } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd554, 0x3e22, 0xcc4b } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd5555554, 0x3e22cbce, 0xcc4c4c4b } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd555555555555000ull, 0x3e22cbce4a902a00ull, 0xcc4c4c4c4c4c5000ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 300, 24.2718, 79.8039 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 300, 24.2718, 79.8039 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 300, 24.2718, 79.8039 } );
       }

    }
  }

#endif
