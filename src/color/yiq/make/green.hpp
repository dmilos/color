#ifndef color_yiq_make_green
#define color_yiq_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 0 } ) 

      inline
      void green( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb77bbb95;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x8312;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7bbb95u;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7a38b9be9645ul;
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void green( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.587, -0.274453, -0.522591 } );
       }

    }
  }

#endif

