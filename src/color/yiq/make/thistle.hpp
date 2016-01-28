#ifndef color_yiq_make_thistle
#define color_yiq_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.78951, 0.0269071, 0.0512344 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xc9, 0x85, 0x8c } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xca1c, 0x85c7, 0x8c8c } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xca1d5082, 0x85c80e50, 0x8c8c8c8c } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xca1d5083b6ea1800ull, 0x85c80e511abe6800ull, 0x8c8c8c8c8c8c9000ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

    }
  }

#endif
