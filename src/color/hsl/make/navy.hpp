#ifndef color_hsl_make_navy
#define color_hsl_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 0.5 } ) 

      inline
      void navy( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3c;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3ff4;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3fffaau;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3fffffffaaaaul;
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.666667, 1, 0.25 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.666667, 1, 0.25 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.666667, 1, 0.25 } );
       }

    }
  }

#endif
