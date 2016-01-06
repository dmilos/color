#ifndef color_yiq_make_sienna
#define color_yiq_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x62;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x82ac;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff84b065u;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff84c8b12a657ful;
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.396486, 0.228834, 0.0195358 } );
       }

    }
  }

#endif
