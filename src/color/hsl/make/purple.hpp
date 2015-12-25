#ifndef color_hsl_make_purple
#define color_hsl_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0, 0.5 } ) 

      inline
      void purple( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb73fffd4;
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3ff9;
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3fffd4u;
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3fffffffd554ul;
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.833333, 1, 0.25 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.833333, 1, 0.25 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.833333, 1, 0.25 } );
       }

    }
  }

#endif

