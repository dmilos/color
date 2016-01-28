#ifndef color_hsl_make_crimson
#define color_hsl_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 348, 83.3333, 47.0588 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf6, 0xd4, 0x78 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf776, 0xd554, 0x7878 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf7777776, 0xd5555554, 0x78787878 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf777777777777800ull, 0xd555555555556000ull, 0x7878787878787800ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 348, 83.3333, 47.0588 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 348, 83.3333, 47.0588 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 348, 83.3333, 47.0588 } );
       }

    }
  }

#endif
