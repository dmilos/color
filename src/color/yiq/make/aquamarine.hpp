#ifndef color_yiq_make_aquamarine
#define color_yiq_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x55;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x5539;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff584bd3u;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff59404ba3d4cdul;
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.831276, -0.243684, -0.158194 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.831276, -0.243684, -0.158194 } );
       }

      inline
      void aquamarine( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.831276, -0.243684, -0.158194 } );
       }

    }
  }

#endif
