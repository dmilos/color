#ifndef color_rgb_make_tomato
#define color_rgb_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255,  99.0/255,  71.0/255.0 } ) 

      inline
      void tomato( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x17;
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x459f;
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4763ffu;
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff47476363fffful;
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 255.0/255,  99.0/255,  71.0/255.0 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 255.0/255,  99.0/255,  71.0/255.0 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 255.0/255,  99.0/255,  71.0/255.0 } );
       }

    }
  }

#endif
