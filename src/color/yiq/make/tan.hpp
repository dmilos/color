#ifndef color_yiq_make_tan
#define color_yiq_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.723176, 0.120478, -0.0239282 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb8, 0x99, 0x79 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb921, 0x99e2, 0x7a23 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb92217d9, 0x99e30c3a, 0x7a23a170 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb92217da69c5f000ull, 0x99e30c3af858d800ull, 0x7a23a170a9557800ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

    }
  }

#endif
