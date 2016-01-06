#ifndef color_hsl_make_gold
#define color_hsl_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #ffd700

      inline
      void gold( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x78;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fe4;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff23u;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff23f9ul;
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 50.5882, 100, 50 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 50.5882, 100, 50 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 50.5882, 100, 50 } );
       }

    }
  }

#endif
