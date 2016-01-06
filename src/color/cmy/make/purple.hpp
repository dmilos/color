#ifndef color_cmy_make_purple
#define color_cmy_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.5 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7b;
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fef;
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff7fu;
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff7ffful;
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 1, 0.5 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 1, 0.5 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 1, 0.5 } );
       }

    }
  }

#endif
