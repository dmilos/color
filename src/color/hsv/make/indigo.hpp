#ifndef color_hsv_make_indigo
#define color_hsv_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 274.615, 100, 50.9804 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xc2, 0xff, 0x82 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xc347, 0xffff, 0x8282 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xc3483482, 0xffffffff, 0x82828282 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xc348348348348000ull, 0x0000000000000000ull, 0x8282828282828000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 274.615, 100, 50.9804 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 274.615, 100, 50.9804 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 274.615, 100, 50.9804 } );
       }

    }
  }

#endif
