#ifndef color_hsv_make_chocolate
#define color_hsv_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 25, 85.7143, 82.3529 } ) - rgb(210,105,30) - #d2691e

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x11, 0xda, 0xd2 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x11c7, 0xdb6c, 0xd2d2 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x11c71c71, 0xdb6db6da, 0xd2d2d2d2 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x11c71c71c71c7200ull, 0xdb6db6db6db6d800ull, 0xd2d2d2d2d2d2d000ull } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 25, 85.7143, 82.3529 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 25, 85.7143, 82.3529 } );
       }

      inline
      void chocolate( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 25, 85.7143, 82.3529 } );
       }

    }
  }

#endif
