#ifndef color_cmy_make_chocolate
#define color_cmy_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.176471, 0.588235, 0.882353 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x2d, 0x96, 0xe1 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2d2d, 0x9696, 0xe1e1 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2d2d2d2d, 0x96969696, 0xe1e1e1e1 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2d2d2d2d2d2d3000ull, 0x9696969696969800ull, 0xe1e1e1e1e1e1e000ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.176471, 0.588235, 0.882353 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.176471, 0.588235, 0.882353 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.176471, 0.588235, 0.882353 } );
       }

    }
  }

#endif
