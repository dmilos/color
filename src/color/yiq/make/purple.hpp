#ifndef color_yiq_make_purple
#define color_yiq_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.2065, 0.137226, 0.261296 } ) - rgb(127,0,127) - #7f007f

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x34, 0x9c, 0xbf } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x34dc, 0x9d7b, 0xbfff } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x34dd2f1a, 0x9d7c4903, 0xbfffffff } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x34dd2f1a9fbe7600ull, 0x9d7c49040864c000ull, 0xc000000000000000ull } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2065, 0.137226, 0.261296 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2065, 0.137226, 0.261296 } );
       }

      inline
      void purple( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2065, 0.137226, 0.261296 } );
       }

    }
  }

#endif
