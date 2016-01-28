#ifndef color_hsv_make_crimson
#define color_hsv_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 348, 90.9091, 86.2745 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf6, 0xe7, 0xdc } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf776, 0xe8b9, 0xdcdc } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf7777776, 0xe8ba2e8a, 0xdcdcdcdc } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf777777777777800ull, 0xe8ba2e8ba2e8c000ull, 0xdcdcdcdcdcdce000ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 348, 90.9091, 86.2745 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 348, 90.9091, 86.2745 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 348, 90.9091, 86.2745 } );
       }

    }
  }

#endif
