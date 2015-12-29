#ifndef color_hsl_make_chocolate
#define color_hsl_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) 

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x68;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x76e2;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff78bf11u;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7878bfff11c7ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0694444, 0.75, 0.470588 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0694444, 0.75, 0.470588 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0694444, 0.75, 0.470588 } );
       }

    }
  }

#endif
