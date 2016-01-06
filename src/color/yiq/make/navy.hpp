#ifndef color_yiq_make_navy
#define color_yiq_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.5 } ) - rgb(0,0,127) - #00007f

      inline
      void navy( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x50;
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa161;
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa55d0eu;
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa6195d7b0e97ul;
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.057, -0.160632, 0.155567 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.057, -0.160632, 0.155567 } );
       }

      inline
      void navy( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.057, -0.160632, 0.155567 } );
       }

    }
  }

#endif
