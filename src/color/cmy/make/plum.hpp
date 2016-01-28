#ifndef color_cmy_make_plum
#define color_cmy_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.133333, 0.372549, 0.133333 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x21, 0x5f, 0x21 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2221, 0x5f5f, 0x2221 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x22222221, 0x5f5f5f5f, 0x22222221 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2222222222222000ull, 0x5f5f5f5f5f5f6000ull, 0x2222222222222000ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.133333, 0.372549, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.133333, 0.372549, 0.133333 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.133333, 0.372549, 0.133333 } );
       }

    }
  }

#endif
