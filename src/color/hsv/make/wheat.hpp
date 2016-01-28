#ifndef color_hsv_make_wheat
#define color_hsv_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 39.0909, 26.9388, 96.0784 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1b, 0x44, 0xf5 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1bcc, 0x44f6, 0xf5f5 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1bcc4867, 0x44f6988d, 0xf5f5f5f5 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1bcc48676f312200ull, 0x44f6988e1b2adc00ull, 0xf5f5f5f5f5f5f800ull } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 39.0909, 26.9388, 96.0784 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 39.0909, 26.9388, 96.0784 } );
       }

      inline
      void wheat( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 39.0909, 26.9388, 96.0784 } );
       }

    }
  }

#endif
