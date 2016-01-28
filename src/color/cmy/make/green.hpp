#ifndef color_cmy_make_green
#define color_cmy_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 1 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xff, 0x7f, 0xff } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xffff, 0x7fff, 0xffff } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xffffffff, 0x7fffffff, 0xffffffff } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x8000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0.5, 1 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0.5, 1 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0.5, 1 } );
       }

    }
  }

#endif
