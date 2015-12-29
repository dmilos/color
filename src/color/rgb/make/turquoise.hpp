#ifndef color_rgb_make_turquoise
#define color_rgb_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } ) 

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb1;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcf67;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd0e040u;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd0d0e0e04040ul;
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );
       }

      inline
      void turquoise( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } );  
       }

    }
  }

#endif
