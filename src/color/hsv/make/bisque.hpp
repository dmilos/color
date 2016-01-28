#ifndef color_hsv_make_bisque
#define color_hsv_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 32.5424, 23.1373, 100 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x17, 0x3a, 0xff } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1724, 0x3b3a, 0xffff } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1724287f, 0x3b3b3b3a, 0xffffffff } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1724287f46debd00ull, 0x3b3b3b3b3b3b3800ull, 0x0000000000000000ull } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 32.5424, 23.1373, 100 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 32.5424, 23.1373, 100 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 32.5424, 23.1373, 100 } );
       }

    }
  }

#endif
