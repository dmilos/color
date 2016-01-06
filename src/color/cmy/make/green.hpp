#ifndef color_cmy_make_green
#define color_cmy_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xdf;
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfdff;
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffu;
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff7ffffffful;
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0.5, 1 } );
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0.5, 1 } );
       }

      inline
      void green( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0.5, 1 } );
       }

    }
  }

#endif
