#ifndef color_hsl_make_tomato
#define color_hsl_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x70;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa3c0;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa3fe06u;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa3a3fffe067eul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 9.13043, 100, 63.9216 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 9.13043, 100, 63.9216 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 9.13043, 100, 63.9216 } );
       }

    }
  }

#endif
