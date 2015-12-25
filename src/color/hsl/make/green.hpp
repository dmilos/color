#ifndef color_hsl_make_green
#define color_hsl_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 0 } ) 

      inline
      void green( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb77fff55;
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fea;
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff55u;
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff5555ul;
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.333333, 1, 0.5 } );
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.333333, 1, 0.5 } );
       }

      inline
      void green( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.333333, 1, 0.5 } );
       }

    }
  }

#endif

