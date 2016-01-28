#ifndef color_hsl_make_tan
#define color_hsl_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 34.2857, 43.75, 68.6275 } ) - rgb(210,180,140) - #d2b48c

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x18, 0x6f, 0xaf } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x1861, 0x6fff, 0xafaf } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x18618618, 0x6fffffff, 0xafafafaf } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x1861861861861a00ull, 0x6ffffffffffff800ull, 0xafafafafafafb000ull } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 34.2857, 43.75, 68.6274 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 34.2857, 43.75, 68.6275 } );
       }

      inline
      void tan( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 34.2857, 43.75, 68.6275 } );
       }

    }
  }

#endif
