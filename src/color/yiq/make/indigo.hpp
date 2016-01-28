#ifndef color_yiq_make_indigo
#define color_yiq_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.146059, 0.0114293, 0.220811 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x25, 0x81, 0xb5 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2563, 0x8274, 0xb614 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x25641c6e, 0x8274aed6, 0xb6157bc5 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x25641c6e59defe00ull, 0x8274aed6ef75c800ull, 0xb6157bc6ac6e5000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.146059, 0.0114293, 0.220811 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.146059, 0.0114293, 0.220811 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.146059, 0.0114293, 0.220811 } );
       }

    }
  }

#endif
