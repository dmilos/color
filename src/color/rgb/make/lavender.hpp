#ifndef color_rgb_make_lavender
#define color_rgb_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 230.0/255.0, 230.0/255.0, 250.0/255.0 } ) - rgb(230,230,250) - #e6e6fa

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe6, 0xe6, 0xfa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe6e6, 0xe6e6, 0xfafa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe6e6e6e6, 0xe6e6e6e6, 0xfafafafa } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 230.0/255.0, 230.0/255.0, 250.0/255.0 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 230.0/255.0, 230.0/255.0, 250.0/255.0 } );
       }

      inline
      void lavender( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 230.0/255.0, 230.0/255.0, 250.0/255.0 } );
       }

    }
  }

#endif
