#ifndef color_yiq_make_silver
#define color_yiq_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.75, 0.75, 0.75 } ) 

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x17;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0000bfu;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff00000000bffful;
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.75, 0, 2.08167e-17 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.75, 0, 2.08167e-17 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.75, 0, 2.08167e-17 } );
       }

    }
  }

#endif

