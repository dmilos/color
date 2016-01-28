#ifndef color_yiq_make_moccasin
#define color_yiq_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.904765, 0.122289, -0.0349569 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe6, 0x99, 0x76 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe79d, 0x9a46, 0x776f } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe79ea8e5, 0x9a46a3d3, 0x777019ab } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe79ea8e656fad000ull, 0x9a46a3d459444800ull, 0x777019ab970b3000ull } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

      inline
      void moccasin( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

    }
  }

#endif
