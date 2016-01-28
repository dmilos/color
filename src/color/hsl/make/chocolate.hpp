#ifndef color_hsl_make_chocolate
#define color_hsl_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 25, 75, 47.0588 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x11, 0xbf, 0x78 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x11c7, 0xbfff, 0x7878 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x11c71c71, 0xbfffffff, 0x78787878 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x11c71c71c71c7200ull, 0xbffffffffffff800ull, 0x7878787878787800ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 25, 75, 47.0588 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 25, 75, 47.0588 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 25, 75, 47.0588 } );
       }

    }
  }

#endif
