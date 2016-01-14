#ifndef color_rgb_make_sienna
#define color_rgb_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x14;
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2a67;
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2d52a0u;
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff2d2d5252a0a0ul;
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } );
       }

    }
  }

#endif
