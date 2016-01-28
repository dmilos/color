#ifndef color_hsl_make_pink
#define color_hsl_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 29.5775, 58.6778, 52.549 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x14, 0x95, 0x86 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1508, 0x9636, 0x8686 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x15086a1e, 0x96370cec, 0x86868b9f } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x15086a1e6e8ad200ull, 0x96370ced65ed8000ull, 0x86868b9fdbd2f800ull } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.5775, 58.6777, 52.549 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.5775, 58.6778, 52.549 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.5775, 58.6778, 52.549 } );
       }

    }
  }

#endif
