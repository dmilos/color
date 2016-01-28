#ifndef color_yiq_make_beige
#define color_yiq_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.949608, 0.0314964, -0.0305034 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf2, 0x86, 0x78 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf318, 0x86c3, 0x7886 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf3197fe5, 0x86c47e3a, 0x788758d9 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf3197fe64cb31800ull, 0x86c47e3b71ce2000ull, 0x788758d9b7192800ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.949608, 0.0314964, -0.0305034 } );
       }

    }
  }

#endif
