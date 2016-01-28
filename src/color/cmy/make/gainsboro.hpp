#ifndef color_cmy_make_gainsboro
#define color_cmy_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.14, 0.14, 0.14 } ) - rgb(219,219,219) - #dbdbdb

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x23, 0x23, 0x23 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x23d6, 0x23d6, 0x23d6 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x23d70a3d, 0x23d70a3d, 0x23d70a3d } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x23d70a3d70a3d800ull, 0x23d70a3d70a3d800ull, 0x23d70a3d70a3d800ull } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.14, 0.14, 0.14 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.14, 0.14, 0.14 } );
       }

      inline
      void gainsboro( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.14, 0.14, 0.14 } );
       }

    }
  }

#endif
