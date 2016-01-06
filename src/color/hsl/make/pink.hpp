#ifndef color_hsl_make_pink
#define color_hsl_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x60;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8642;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff869514u;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff868696361508ul;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 29.5775, 58.6777, 52.549 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 29.5775, 58.6778, 52.549 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 29.5775, 58.6778, 52.549 } );
       }

    }
  }

#endif
