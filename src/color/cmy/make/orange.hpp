#ifndef color_cmy_make_orange
#define color_cmy_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.35, 1 } ) - rgb(255,165,0) - #ffa500

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x59, 0xff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x5999, 0xffff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x59999999, 0xffffffff } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x5999999999999800ull, 0x0000000000000000ull } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.35, 1 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.35, 1 } );
       }

      inline
      void orange( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.35, 1 } );
       }

    }
  }

#endif
