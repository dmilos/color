#ifndef color_yiq_make_blue
#define color_yiq_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.114, -0.321263, 0.311135 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x1d, 0x3a, 0xcb } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1d2e, 0x3af8, 0xcc34 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1d2f1a9f, 0x3af89207, 0xcc350f52 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1d2f1a9fbe76c900ull, 0x3af8920810c97a00ull, 0xcc350f534dff8000ull } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.114, -0.321263, 0.311135 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.114, -0.321263, 0.311135 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.114, -0.321263, 0.311135 } );
       }

    }
  }

#endif
