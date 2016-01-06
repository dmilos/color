#ifndef color_yiq_make_moccasin
#define color_yiq_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.709804 } ) - rgb(255,228,181) - #ffe4b5

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x66;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x765c;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7699e6u;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff776f9a46e79dul;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.904765, 0.122289, -0.0349569 } );
       }

    }
  }

#endif
