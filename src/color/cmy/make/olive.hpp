#ifndef color_cmy_make_olive
#define color_cmy_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0 } ) 

      inline
      void olive( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xdb;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfdef;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff7f7fu;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff7fff7ffful;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 0.5, 1 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 0.5, 1 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 0.5, 1 } );
       }

    }
  }

#endif

