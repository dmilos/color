#ifndef color_hsl_make_moccasin
#define color_hsl_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.709804 } ) 

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb8;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd7e3;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdaff1au;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdadaffff1b19ul;
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.105856, 1, 0.854902 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.105856, 1, 0.854902 } );
       }

      inline
      void moccasin( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.105856, 1, 0.854902 } );
       }

    }
  }

#endif
