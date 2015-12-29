#ifndef color_cmy_make_gainsboro
#define color_cmy_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.86, 0.86, 0.86 } ) 

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2084;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff232323u;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff23d623d623d6ul;
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.14, 0.14, 0.14 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.14, 0.14, 0.14 } );
       }

      inline
      void gainsboro( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.14, 0.14, 0.14 } );
       }

    }
  }

#endif
