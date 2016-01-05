#ifndef color_cmyk_make_moccasin
#define color_cmyk_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.709804 } ) 

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x410;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x491a00u;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x4a491b1a0000ul;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.105882, 0.290196, 0 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.105882, 0.290196, 0 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.105882, 0.290196, 0 } );
       }

    }
  }

#endif
