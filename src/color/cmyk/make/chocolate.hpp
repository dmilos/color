#ifndef color_cmyk_make_chocolate
#define color_cmyk_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) 

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x24;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2c70;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x2dda7f00u;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x2d2ddb6c7fff0000ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.5, 0.857143, 0.176471 } );
       }

    }
  }

#endif
