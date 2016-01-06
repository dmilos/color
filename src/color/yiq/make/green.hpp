#ifndef color_yiq_make_green
#define color_yiq_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x12;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3d69;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3f624au;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3fff62834b22ul;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2935, -0.137226, -0.261296 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2935, -0.137226, -0.261296 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2935, -0.137226, -0.261296 } );
       }

    }
  }

#endif
