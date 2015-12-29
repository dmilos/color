#ifndef color_hsl_make_aquamarine
#define color_hsl_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 1, 0.831373 } ) 

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xbb;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbfed;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbfff71u;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbfffffff719bul;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.443791, 1, 0.75 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.443791, 1, 0.75 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.443791, 1, 0.75 } );
       }

    }
  }

#endif
