#ifndef color_hsl_make_olive
#define color_hsl_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x39;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3fe5;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3fff2au;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3fffffff2aaaul;
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 100, 25 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 100, 25 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 100, 25 } );
       }

    }
  }

#endif
