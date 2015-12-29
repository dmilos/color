#ifndef color_rgb_make_teal
#define color_rgb_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0.5 } ) 

      inline
      void teal( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x58;
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7de0;
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff808000;
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7fff0000ul;
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.5, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.5, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.5, 0.5 } );
       }

    }
  }

#endif
