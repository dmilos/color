#ifndef color_cmy_make_blue
#define color_cmy_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0xff, 0x00 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0xffff, 0x0000 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0xffffffff, 0x00000000 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 1, 0 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 1, 0 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 1, 0 } );
       }

    }
  }

#endif
