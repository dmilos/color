#ifndef color_gray_make_red
#define color_gray_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< color::category::gray_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x36;
       }

      inline
      void red( ::color::_internal::model< color::category::gray_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3671;
       }

      inline
      void red( ::color::_internal::model< color::category::gray_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x3671bb2eu;
       }

      inline
      void red( ::color::_internal::model< color::category::gray_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0x3671bb2e3ed7ac00ul );
       }

      inline
      void red( ::color::_internal::model< color::category::gray_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,1>( { 0.2126729f } );
       }

      inline
      void red( ::color::_internal::model< color::category::gray_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,1>( { 0.2126729 } );
       }

      inline
      void red( ::color::_internal::model< color::category::gray_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,1>( { 0.2126729 } );
       }

    }
  }

#endif
