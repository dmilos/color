#ifndef color_cmy_make_gray50
#define color_cmy_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0.5 } ) 

      inline
      void gray50( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5b;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7def;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7f7fu;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7fff7ffful;
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 0.5, 0.5 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 0.5, 0.5 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 0.5, 0.5 } );
       }

    }
  }

#endif

