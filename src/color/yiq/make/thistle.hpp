#ifndef color_yiq_make_thistle
#define color_yiq_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5d;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8a18;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8c85c9u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8c8c85c7ca1cul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.78951, 0.0269071, 0.0512344 } );
       }

    }
  }

#endif
