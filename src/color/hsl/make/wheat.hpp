#ifndef color_hsl_make_wheat
#define color_hsl_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 39.0909, 76.7442, 83.1373 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1b, 0xc3, 0xd3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1bcc, 0xc476, 0xd4d3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1bcc4867, 0xc47711db, 0xd4d4d4d3 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1bcc48676f312200ull, 0xc47711dc47711800ull, 0xd4d4d4d4d4d4d000ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 39.0909, 76.7442, 83.1373 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 39.0909, 76.7442, 83.1373 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 39.0909, 76.7442, 83.1373 } );
       }

    }
  }

#endif
