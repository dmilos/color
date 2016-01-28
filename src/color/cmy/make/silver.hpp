#ifndef color_cmy_make_silver
#define color_cmy_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25, 0.25, 0.25 } ) - rgb(191,191,191) - #bfbfbf

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x3f, 0x3f, 0x3f } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x3fff, 0x3fff, 0x3fff } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x3fffffff, 0x3fffffff, 0x3fffffff } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4000000000000000ull, 0x4000000000000000ull, 0x4000000000000000ull } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.25, 0.25, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.25, 0.25, 0.25 } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.25, 0.25, 0.25 } );
       }

    }
  }

#endif
