#ifndef color_hsl_make_brown
#define color_hsl_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 59.4203, 40.5882 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x00, 0x97, 0x67 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0000, 0x981d, 0x67e7 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x00000000, 0x981dae5f, 0x67e7e7e7 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0000000000000000ull, 0x981dae6076b98800ull, 0x67e7e7e7e7e7e800ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 59.4203, 40.5882 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 59.4203, 40.5882 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 59.4203, 40.5882 } );
       }

    }
  }

#endif
