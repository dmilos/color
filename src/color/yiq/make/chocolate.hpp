#ifndef color_yiq_make_chocolate
#define color_yiq_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6b;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7f0f;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7ec87fu;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7ee9c9018058ul;
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

      inline
      void chocolate( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

    }
  }

#endif
