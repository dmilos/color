#ifndef color_cmy_make_teal
#define color_cmy_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007f7f

      inline
      void teal( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5f;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7dff;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7f7fffu;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fff7ffffffful;
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0.5, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0.5, 0.5 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0.5, 0.5 } );
       }

    }
  }

#endif
