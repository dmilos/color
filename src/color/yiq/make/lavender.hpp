#ifndef color_yiq_make_lavender
#define color_yiq_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x81dc;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff857ae8u;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff85f97a95e92ful;
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

      inline
      void lavender( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.910902, -0.0251971, 0.0244027 } );
       }

    }
  }

#endif
