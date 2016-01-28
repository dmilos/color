#ifndef color_cmy_make_thistle
#define color_cmy_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.152941, 0.25098, 0.152941 } ) - rgb(216,191,216) - #d8bfd8

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x27, 0x40, 0x27 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2727, 0x4040, 0x2727 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x27272727, 0x40404040, 0x27272727 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2727272727272800ull, 0x4040404040404000ull, 0x2727272727272800ull } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.152941, 0.25098, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.152941, 0.25098, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.152941, 0.25098, 0.152941 } );
       }

    }
  }

#endif
