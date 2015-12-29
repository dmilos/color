#ifndef color_hsl_make_turquoise
#define color_hsl_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.25098, 0.878431, 0.815686 } ) 

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6b;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8ece;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff90b77bu;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff9090b8807bbbul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.483333, 0.720721, 0.564706 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.483333, 0.720721, 0.564706 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.483333, 0.720721, 0.564706 } );
       }

    }
  }

#endif
