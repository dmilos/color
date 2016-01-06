#ifndef color_yiq_make_snow
#define color_yiq_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.980392, 0.980392 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7dfe;
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff8082fbu;
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff81038282fc7aul;
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

    }
  }

#endif
