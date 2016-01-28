#ifndef color_yiq_make_aquamarine
#define color_yiq_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.831276, -0.243684, -0.158194 } ) - rgb(127,255,212) - #7fffd4

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xd3, 0x4b, 0x58 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xd4cd, 0x4ba3, 0x5940 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xd4ce88e6, 0x4ba3e35b, 0x5940c452 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xd4ce88e71c5bd800ull, 0x4ba3e35c012f5800ull, 0x5940c45352916800ull } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.831276, -0.243684, -0.158194 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.831276, -0.243684, -0.158194 } );
       }

      inline
      void aquamarine( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.831276, -0.243684, -0.158194 } );
       }

    }
  }

#endif
