#ifndef color_hsl_make_tan
#define color_hsl_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) 

      inline
      void tan( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x98;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xada2;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffaf6f18u;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffafaf6fff1861ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0952381, 0.4375, 0.686275 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0952381, 0.4375, 0.686275 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0952381, 0.4375, 0.686275 } );
       }

    }
  }

#endif
