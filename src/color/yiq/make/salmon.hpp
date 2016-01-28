#ifndef color_yiq_make_salmon
#define color_yiq_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.726247, 0.0656535, 0.125012 } ) - rgb(221,160,221) - #dda0dd

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb9, 0x8d, 0x9e } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb9ea, 0x8e1a, 0x9e9e } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb9eb5646, 0x8e1b5757, 0x9e9ea13f } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb9eb56472bdaf000ull, 0x8e1b575871f3d000ull, 0x9e9ea14057082800ull } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.726247, 0.0656535, 0.125012 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.726247, 0.0656535, 0.125012 } );
       }

      inline
      void salmon( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.726247, 0.0656535, 0.125012 } );
       }

    }
  }

#endif
