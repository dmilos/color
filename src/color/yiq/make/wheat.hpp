#ifndef color_yiq_make_wheat
#define color_yiq_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.878333, 0.107905, -0.0333933 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdf, 0x96, 0x77 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe0d9, 0x972e, 0x77d1 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe0da740c, 0x972f6ee6, 0x77d22430 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe0da740da740d800ull, 0x972f6ee78cbae800ull, 0x77d22430b69abc00ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

    }
  }

#endif
