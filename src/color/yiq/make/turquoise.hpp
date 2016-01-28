#ifndef color_yiq_make_turquoise
#define color_yiq_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.683671, -0.353625, -0.152201 } ) - rgb(64,224,208) - #40e0d0

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xae, 0x33, 0x5a } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaf04, 0x3404, 0x5ab8 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaf050921, 0x34047b5a, 0x5ab8912f } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaf050921b529e000ull, 0x34047b5ad9cd3400ull, 0x5ab891300beba400ull } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.683671, -0.353625, -0.152201 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.683671, -0.353625, -0.152201 } );
       }

      inline
      void turquoise( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.683671, -0.353625, -0.152201 } );
       }

    }
  }

#endif
