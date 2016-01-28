#ifndef color_rgb_make_brown
#define color_rgb_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xa5, 0x2a, 0x2a } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xa5a5, 0x2a2a, 0x2a2a } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xa5a5a5a5, 0x2a2a2a2a, 0x2a2a2a2a } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0, 0, 0 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

    }
  }

#endif
