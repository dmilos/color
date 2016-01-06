#ifndef color_yiq_make_wheat
#define color_yiq_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) - rgb(245,222,179) - #f5deb3

      inline
      void wheat( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x66;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x765b;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7796dfu;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff77d1972ee0d9ul;
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.878333, 0.107905, -0.0333933 } );
       }

    }
  }

#endif
