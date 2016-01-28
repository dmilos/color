#ifndef color_cmy_make_tan
#define color_cmy_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.176471, 0.294118, 0.45098 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2d, 0x4a, 0x72 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2d2d, 0x4b4a, 0x7372 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2d2d2d2d, 0x4b4b4b4a, 0x73737372 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2d2d2d2d2d2d3000ull, 0x4b4b4b4b4b4b4800ull, 0x7373737373737000ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.176471, 0.294118, 0.45098 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.176471, 0.294118, 0.45098 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.176471, 0.294118, 0.45098 } );
       }

    }
  }

#endif
