#ifndef color_hsv_make_blue
#define color_hsv_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 240, 100, 100 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xaa, 0xff, 0xff } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaaaa, 0xffff, 0xffff } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaaaaaaaa, 0xffffffff, 0xffffffff } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaaaaaaaaaaaaa800ull, 0x0000000000000000ull, 0x0000000000000000ull } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240, 100, 100 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240, 100, 100 } );
       }

      inline
      void blue( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240, 100, 100 } );
       }

    }
  }

#endif
