#ifndef color_hsl_make_azure
#define color_hsl_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.941176, 1, 1 } ) 

      inline
      void azure( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xbb;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf7ef;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff7ff7fu;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff877ffff7ffful;
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 0.970588 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 0.970588 } );
       }

      inline
      void azure( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 0.970588 } );
       }

    }
  }

#endif
