#ifndef color_rgb_make_green
#define color_rgb_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x7f, 0x00 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x7fff, 0x0000 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x7fffffff, 0x00000000 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.5, 0 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.5, 0 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.5, 0 } );
       }

    }
  }

#endif
