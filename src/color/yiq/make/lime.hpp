#ifndef color_yiq_make_lime
#define color_yiq_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc;
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x112;
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff004495u;
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000045079645ul;
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void lime( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.587, -0.274453, -0.522591 } );
       }

    }
  }

#endif
