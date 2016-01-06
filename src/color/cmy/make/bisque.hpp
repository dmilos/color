#ifndef color_cmy_make_bisque
#define color_cmy_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.768627 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3860;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3a1a00u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3b3a1b1a0000ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.105882, 0.231373 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.105882, 0.231373 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.105882, 0.231373 } );
       }

    }
  }

#endif
