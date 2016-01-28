#ifndef color_yiq_make_peru
#define color_yiq_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.574698, 0.256392, -0.0257042 } ) - rgb(205,133,63) - #cd853f

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x92, 0xb6, 0x79 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x931e, 0xb716, 0x79b3 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x931f6922, 0xb7171f30, 0x79b445c5 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x931f692381b6f800ull, 0xb7171f30fc655000ull, 0x79b445c5904c9400ull } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.574698, 0.256392, -0.0257042 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.574698, 0.256392, -0.0257042 } );
       }

      inline
      void peru( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.574698, 0.256392, -0.0257042 } );
       }

    }
  }

#endif
