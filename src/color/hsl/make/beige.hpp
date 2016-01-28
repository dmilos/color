#ifndef color_hsl_make_beige
#define color_hsl_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 60, 55.5556, 91.1765 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2a, 0x8d, 0xe8 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2aaa, 0x8e38, 0xe968 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2aaaaaaa, 0x8e38e38d, 0xe9696968 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2aaaaaaaaaaaaa00ull, 0x8e38e38e38e3b000ull, 0xe969696969697000ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 55.5556, 91.1765 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 55.5556, 91.1765 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 55.5556, 91.1765 } );
       }

    }
  }

#endif
