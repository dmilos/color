#ifndef color_hsl_make_lime
#define color_hsl_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7a;
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fea;
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff55u;
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff5555ul;
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 120, 100, 50 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 120, 100, 50 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 120, 100, 50 } );
       }

    }
  }

#endif
