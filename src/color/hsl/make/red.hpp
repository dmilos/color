#ifndef color_hsl_make_red
#define color_hsl_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x78;
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fe0;
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff00u;
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff0000ul;
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 100, 50 } );
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 100, 50 } );
       }

      inline
      void red( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 100, 50 } );
       }

    }
  }

#endif
