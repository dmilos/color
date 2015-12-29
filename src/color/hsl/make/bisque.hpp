#ifndef color_hsl_make_bisque
#define color_hsl_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.768627 } ) 

      inline
      void bisque( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb0;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xdfc2;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe1fe17u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe261fffe1724ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0903955, 1, 0.884314 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0903955, 1, 0.884314 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0903955, 1, 0.884314 } );
       }

    }
  }

#endif
