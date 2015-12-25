#ifndef color_yiq_make_blue
#define color_yiq_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 1 } ) 

      inline
      void blue( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb74faf1d;
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x4ee3;
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff4faf1du;
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff4fa6adc31d2eul;
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.114, -0.321263, 0.311135 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.114, -0.321263, 0.311135 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.114, -0.321263, 0.311135 } );
       }

    }
  }

#endif

