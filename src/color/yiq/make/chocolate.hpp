#ifndef color_yiq_make_chocolate
#define color_yiq_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.501353, 0.339784, -0.00443991 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7f, 0xc8, 0x7e } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x8058, 0xc901, 0x7ee9 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x8058aa95, 0xc9022f66, 0x7ee99ad3 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8058aa961b39f000ull, 0xc9022f670a1f1800ull, 0x7ee99ad44169c800ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.501353, 0.339784, -0.00443991 } );
       }

    }
  }

#endif
