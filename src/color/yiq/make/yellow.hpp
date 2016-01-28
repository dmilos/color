#ifndef color_yiq_make_yellow
#define color_yiq_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.886, 0.321263, -0.311135 } ) - rgb(255,255,0) - #ffff00

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe1, 0xc4, 0x33 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe2d0, 0xc506, 0x33ca } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe2d0e55f, 0xc5076df7, 0x33caf0ac } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe2d0e56041893000ull, 0xc5076df7ef368800ull, 0x33caf0acb2008200ull } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.886, 0.321263, -0.311135 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.886, 0.321263, -0.311135 } );
       }

      inline
      void yellow( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.886, 0.321263, -0.311135 } );
       }

    }
  }

#endif
