#ifndef color_cmy_make_orchid
#define color_cmy_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.145098, 0.560784, 0.160784 } ) - rgb(218,112,214) - #da70d6

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x25, 0x8f, 0x28 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2525, 0x8f8f, 0x2928 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x25252525, 0x8f8f8f8f, 0x29292928 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2525252525252800ull, 0x8f8f8f8f8f8f9000ull, 0x2929292929292800ull } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.145098, 0.560784, 0.160784 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.145098, 0.560784, 0.160784 } );
       }

      inline
      void orchid( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.145098, 0.560784, 0.160784 } );
       }

    }
  }

#endif
