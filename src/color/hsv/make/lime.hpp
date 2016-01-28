#ifndef color_hsv_make_lime
#define color_hsv_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 120, 100, 100 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x55, 0xff, 0xff } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x5555, 0xffff, 0xffff } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x55555555, 0xffffffff, 0xffffffff } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x5555555555555400ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 120, 100, 100 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 120, 100, 100 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 120, 100, 100 } );
       }

    }
  }

#endif
