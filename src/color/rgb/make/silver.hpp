#ifndef color_rgb_make_silver
#define color_rgb_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.75, 0.75, 0.75 } ) - rgb(191,191,191) - #bfbfbf

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xbf, 0xbf, 0xbf } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xbfff, 0xbfff, 0xbfff } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xbfffffff, 0xbfffffff, 0xbfffffff } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.75, 0.75, 0.75 } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.75, 0.75, 0.75 } );
       }

      inline
      void silver( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.75, 0.75, 0.75 } );
       }

    }
  }

#endif
