#ifndef color_cmyk_make_tomato
#define color_cmyk_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.388235, 0.278431 } ) 

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb89c00;
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa90;
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffb89c00u;
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb8b89c9c0000ul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.611765, 0.721569, 0 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.611765, 0.721569, 0 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.611765, 0.721569, 0 } );
       }

    }
  }

#endif
