#ifndef color_hsl_make_coral
#define color_hsl_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #ff7f4f

      inline
      void coral( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x78;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa7e1;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa7ff0bu;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa7adffff0bbful;
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 16.5217, 100, 65.5 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 16.5217, 100, 65.5 } );
       }

      inline
      void coral( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 16.5217, 100, 65.5 } );
       }

    }
  }

#endif
