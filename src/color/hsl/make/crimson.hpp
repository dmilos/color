#ifndef color_hsl_make_crimson
#define color_hsl_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) 

      inline
      void crimson( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6e;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x773d;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff78d4f6u;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7878d554f776ul;
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.966667, 0.833333, 0.470588 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.966667, 0.833333, 0.470588 } );
       }

      inline
      void crimson( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.966667, 0.833333, 0.470588 } );
       }

    }
  }

#endif
