#ifndef color_rgb_make_plum
#define color_rgb_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdd, 0xa0, 0xdd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdddd, 0xa0a0, 0xdddd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdddddddd, 0xa0a0a0a0, 0xdddddddd } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } );
       }

    }
  }

#endif
