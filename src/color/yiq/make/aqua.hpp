#ifndef color_yiq_make_aqua
#define color_yiq_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.701, -0.595716, -0.211456 } ) - rgb(0,255,255) - #00ffff

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb2, 0x00, 0x4b } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb374, 0x0000, 0x4c34 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb374bc69, 0x00000000, 0x4c350f53 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb374bc6a7ef9d800ull, 0x0000000000000000ull, 0x4c350f534dff8000ull } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void aqua( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.701, -0.595716, -0.211456 } );
       }

    }
  }

#endif
