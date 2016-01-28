#ifndef color_rgb_make_coral
#define color_rgb_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0x7f, 0x4f } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0x7fff, 0x4f5b } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0x7fffffff, 0x4f5c28f5 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0.5, 0.31 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0.5, 0.31 } );
       }

      inline
      void coral( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0.5, 0.31 } );
       }

    }
  }

#endif
