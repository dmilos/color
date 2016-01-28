#ifndef color_cmyk_make_brown
#define color_cmyk_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.745455, 0.745455 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x00, 0xbe, 0xbe, 0x59 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x0000, 0xbed5, 0xbed5, 0x5a59 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x00000000, 0xbed61bec, 0xbed61bec, 0x5a5a5a59 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x0000000000000000ull, 0xbed61bed61bed800ull, 0xbed61bed61bed800ull, 0x5a5a5a5a5a5a5800ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

    }
  }

#endif
