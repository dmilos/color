#ifndef color_hsl_make_salmon
#define color_hsl_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) 

      inline
      void salmon( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9d;
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbdd9;
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbe78d4u;
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbf3e790dd554ul;
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.833333, 0.472869, 0.747059 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.833333, 0.472869, 0.747059 } );
       }

      inline
      void salmon( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.833333, 0.472869, 0.747059 } );
       }

    }
  }

#endif
