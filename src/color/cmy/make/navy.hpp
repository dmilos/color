#ifndef color_cmy_make_navy
#define color_cmy_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.5 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7f;
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fff;
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fffffu;
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7ffffffffffful;
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 1, 0.5 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 1, 0.5 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 1, 0.5 } );
       }

    }
  }

#endif
