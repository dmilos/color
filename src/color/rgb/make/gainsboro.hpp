#ifndef color_rgb_make_gainsboro
#define color_rgb_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.86, 0.86, 0.86 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xdb, 0xdb, 0xdb } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdc28, 0xdc28, 0xdc28 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdc28f5c1, 0xdc28f5c1, 0xdc28f5c1 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.86, 0.86, 0.86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.86, 0.86, 0.86 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.86, 0.86, 0.86 } );
       }

    }
  }

#endif
