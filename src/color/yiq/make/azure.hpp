#ifndef color_yiq_make_azure
#define color_yiq_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.982412, -0.0350421, -0.0124386 } ) - rgb(240,255,255) - #f0ffff

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfa, 0x78, 0x7c } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfb7e, 0x7878, 0x7cf3 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfb7f565f, 0x78787878, 0x7cf40ff5 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfb7f56609e0eb000ull, 0x7878787878787800ull, 0x7cf40ff5d7696400ull } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

      inline
      void azure( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.982412, -0.0350421, -0.0124386 } );
       }

    }
  }

#endif
