#ifndef color_yiq_make_tan
#define color_yiq_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x65;
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7a56;
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7999b8u;
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7a2399e2b921ul;
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

      inline
      void tan( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.723176, 0.120478, -0.0239282 } );
       }

    }
  }

#endif
