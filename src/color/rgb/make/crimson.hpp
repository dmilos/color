#ifndef color_rgb_make_crimson
#define color_rgb_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdc, 0x14, 0x3c } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdcdc, 0x1414, 0x3c3c } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdcdcdcdc, 0x14141414, 0x3c3c3c3c } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 220.0/255.0,  20.0/255.0,  60.0/255.0 } );
       }

    }
  }

#endif
