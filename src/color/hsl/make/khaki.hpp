#ifndef color_hsl_make_khaki
#define color_hsl_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 54, 76.9231, 74.5098 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x26, 0xc4, 0xbe } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2666, 0xc4eb, 0xbebe } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x26666666, 0xc4ec4ec4, 0xbebebebe } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2666666666666600ull, 0xc4ec4ec4ec4ec000ull, 0xbebebebebebec000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 54, 76.9231, 74.5098 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 54, 76.9231, 74.5098 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 54, 76.9231, 74.5098 } );
       }

    }
  }

#endif
