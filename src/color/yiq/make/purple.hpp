#ifndef color_yiq_make_purple
#define color_yiq_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.5 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa1;
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbe66;
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbf9c34u;
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbfff9d7b34dcul;
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2065, 0.137226, 0.261296 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2065, 0.137226, 0.261296 } );
       }

      inline
      void purple( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2065, 0.137226, 0.261296 } );
       }

    }
  }

#endif
