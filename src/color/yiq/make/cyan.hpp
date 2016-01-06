#ifndef color_yiq_make_cyan
#define color_yiq_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00ffff

      inline
      void cyan( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4815;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4b00b2u;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff4c340000b374ul;
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void cyan( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.701, -0.595716, -0.211456 } );
       }

    }
  }

#endif
