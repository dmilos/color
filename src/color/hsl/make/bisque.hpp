#ifndef color_hsl_make_bisque
#define color_hsl_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 32.5424, 100, 88.4314 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x17, 0xfe, 0xe1 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1724, 0xfffe, 0xe261 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x1724287f, 0xfffffffe, 0xe2626261 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1724287f46debd00ull, 0xffffffffffffe000ull, 0xe262626262626000ull } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 32.5424, 100, 88.4314 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 32.5424, 100, 88.4314 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 32.5424, 100, 88.4314 } );
       }

    }
  }

#endif
