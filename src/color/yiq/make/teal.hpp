#ifndef color_yiq_make_teal
#define color_yiq_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0.5 } ) 

      inline
      void teal( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x32;
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xeaea;
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffe6b559u;
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffe4f0b3c059baul;
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.3505, -0.297858, -0.105728 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.3505, -0.297858, -0.105728 } );
       }

      inline
      void teal( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.3505, -0.297858, -0.105728 } );
       }

    }
  }

#endif

