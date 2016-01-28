#ifndef color_cmyk_make_pink
#define color_cmyk_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.351219, 0.692683 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0x59, 0xb0, 0x31 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0x59e9, 0xb152, 0x3231 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0x59e983af, 0xb153aa29, 0x32322af5 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0x59e983af6f5a3800ull, 0xb153aa2aae025000ull, 0x32322af577100000ull } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.351219, 0.692683, 0.196078 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.351219, 0.692683, 0.196078 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.351219, 0.692683, 0.196078 } );
       }

    }
  }

#endif
