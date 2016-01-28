#ifndef color_hsv_make_sienna
#define color_hsv_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 19.3043, 71.875, 62.7451 } ) - rgb(160,82,45) - #a0522d

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0d, 0xb7, 0xa0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0dba, 0xb7ff, 0xa0a0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0dba3fd0, 0xb7ffffff, 0xa0a0a0a0 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0dba3fd08298dc00ull, 0xb7fffffffffff800ull, 0xa0a0a0a0a0a0a000ull } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 19.3043, 71.875, 62.7451 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 19.3043, 71.875, 62.7451 } );
       }

      inline
      void sienna( ::color::_internal::model< ::color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 19.3043, 71.875, 62.7451 } );
       }

    }
  }

#endif
