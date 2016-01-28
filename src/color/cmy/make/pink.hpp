#ifndef color_cmy_make_pink
#define color_cmy_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.196078, 0.478431, 0.752941 } ) - rgb(205,133,63) - #cd853f

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x31, 0x79, 0xbf } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x3231, 0x7a79, 0xc0bf } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x32322af5, 0x7a7a7439, 0xc0c0bdca } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x32322af577100000ull, 0x7a7a743a647fe000ull, 0xc0c0bdcad14a0800ull } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

      inline
      void pink( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.196078, 0.478431, 0.752941 } );
       }

    }
  }

#endif
