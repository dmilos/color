#ifndef color_hsl_make_indigo
#define color_hsl_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.294118, 0, 0.509804 } ) 

      inline
      void indigo( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3d;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x43f7;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff41ffc2u;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff4141ffffc347ul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.762821, 1, 0.254902 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.762821, 1, 0.254902 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.762821, 1, 0.254902 } );
       }

    }
  }

#endif
