#ifndef color_rgb_make_linen
#define color_rgb_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfa, 0xf0, 0xe6 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfafa, 0xf0f0, 0xe6e6 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfafafafa, 0xf0f0f0f0, 0xe6e6e6e6 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3>( { 0, 0, 0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } );
       }

    }
  }

#endif
