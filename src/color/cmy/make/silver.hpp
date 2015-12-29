#ifndef color_cmy_make_silver
#define color_cmy_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.75, 0.75, 0.75 } ) 

      inline
      void silver( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3ce7;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3f3f3fu;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3fff3fff3ffful;
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.25, 0.25, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.25, 0.25, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.25, 0.25, 0.25 } );
       }

    }
  }

#endif
