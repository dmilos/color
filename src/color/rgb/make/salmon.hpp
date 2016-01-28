#ifndef color_rgb_make_salmon
#define color_rgb_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #dda0dd

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdd, 0xa0, 0xdd } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdddd, 0xa0a0, 0xdddd } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdddde374, 0xa0a0a0f4, 0xdddde374 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.866667, 0.627451, 0.866667 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.866667, 0.627451, 0.866667 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.866667, 0.627451, 0.866667 } );
       }

    }
  }

#endif
