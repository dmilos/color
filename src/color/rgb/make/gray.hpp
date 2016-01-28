#ifndef color_rgb_make_gray50
#define color_rgb_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7f7f7f

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x7f, 0x7f, 0x7f } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x7fff, 0x7fff, 0x7fff } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x7fffffff, 0x7fffffff, 0x7fffffff } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8000000000000000ull, 0x8000000000000000ull, 0x8000000000000000ull } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 0.5, 0.5 } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 0.5, 0.5 } );
       }

      inline
      void gray50( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 0.5, 0.5 } );
       }

    }
  }

#endif
