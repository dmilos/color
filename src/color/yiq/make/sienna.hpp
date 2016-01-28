#ifndef color_yiq_make_sienna
#define color_yiq_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.396486, 0.228834, 0.0195358 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x65, 0xb0, 0x84 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x657f, 0xb12a, 0x84c8 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x65801fdd, 0xb12b3e22, 0x84c8f310 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x65801fde551dd000ull, 0xb12b3e22f88b7000ull, 0x84c8f310a49ad800ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

    }
  }

#endif
