#ifndef color_cmy_make_linen
#define color_cmy_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0196078, 0.0588235, 0.0980392 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x05, 0x0f, 0x18 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0505, 0x0f0f, 0x1918 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x05050505, 0x0f0f0f0f, 0x19191918 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0505050505050800ull, 0x0f0f0f0f0f0f1000ull, 0x1919191919191800ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0196078, 0.0588235, 0.0980392 } );
       }

    }
  }

#endif
