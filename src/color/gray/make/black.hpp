#ifndef color_gray_make_black
#define color_gray_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0 } ) - rgb(0,0,0) - #000000

      inline
      void black( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x0u;
       }

      inline
      void black( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0x0ul );
       }

      inline
      void black( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( {0} );
       }

      inline
      void black( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( {0} );
       }

      inline
      void black( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( {0} );
       }

    }
  }

#endif
