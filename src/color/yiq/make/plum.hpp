#ifndef color_yiq_make_plum
#define color_yiq_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.726247, 0.0656534, 0.125012 } ) - rgb(221,160,221) - #dda0dd

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb9, 0x8d, 0x9e } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb9ea, 0x8e1a, 0x9e9e } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb9eb53c5, 0x8e1b5621, 0x9e9e9e9e } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb9eb53c676975800ull, 0x8e1b56220e0e1000ull, 0x9e9e9e9e9e9ea000ull } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.726247, 0.0656534, 0.125012 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.726247, 0.0656534, 0.125012 } );
       }

      inline
      void plum( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.726247, 0.0656534, 0.125012 } );
       }

    }
  }

#endif
