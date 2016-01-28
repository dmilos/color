#ifndef color_cmy_make_crimson
#define color_cmy_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.137255, 0.921569, 0.764706 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x22, 0xeb, 0xc3 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2322, 0xebeb, 0xc3c3 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x23232322, 0xebebebeb, 0xc3c3c3c3 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2323232323232000ull, 0xebebebebebebf000ull, 0xc3c3c3c3c3c3c000ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.137255, 0.921569, 0.764706 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.137255, 0.921569, 0.764706 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.137255, 0.921569, 0.764706 } );
       }

    }
  }

#endif
