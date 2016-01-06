#ifndef color_hsl_make_beige
#define color_hsl_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x99;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xe625;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe88d2au;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe9688e382aaaul;
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 60, 55.5556, 91.1765 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 60, 55.5556, 91.1765 } );
       }

      inline
      void beige( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 60, 55.5556, 91.1765 } );
       }

    }
  }

#endif
