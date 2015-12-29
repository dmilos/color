#ifndef color_hsl_make_wheat
#define color_hsl_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) 

      inline
      void wheat( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa8;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd2e3;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd3c31bu;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd4d3c4761bccul;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.108586, 0.767442, 0.831373 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.108586, 0.767442, 0.831373 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.108586, 0.767442, 0.831373 } );
       }

    }
  }

#endif
