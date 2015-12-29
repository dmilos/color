#ifndef color_cmy_make_coral
#define color_cmy_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.5, 0.31 } ) 

      inline
      void coral( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x98;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xade0;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffaf7f00u;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffb0a37fff0000ul;
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.5, 0.69 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.5, 0.69 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.5, 0.69 } );
       }

    }
  }

#endif
