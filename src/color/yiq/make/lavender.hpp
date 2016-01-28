#ifndef color_yiq_make_lavender
#define color_yiq_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.910902, -0.0251971, 0.0244027 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe8, 0x7a, 0x85 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe92f, 0x7a95, 0x85f9 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe930def2, 0x7a960169, 0x85fa1f51 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe930def36e4f9800ull, 0x7a96016a0b5b1800ull, 0x85fa1f51d3ebe000ull } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

    }
  }

#endif
