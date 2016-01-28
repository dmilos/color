#ifndef color_yiq_make_tomato
#define color_yiq_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.558635, 0.399714, 0.0951978 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x8e, 0xd5, 0x96 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x8f02, 0xd5e1, 0x9750 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x8f02b8fe, 0xd5e2b2b9, 0x97512e29 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x8f02b8fea06b2800ull, 0xd5e2b2b9d801f800ull, 0x97512e2a4a3a9800ull } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

      inline
      void tomato( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

    }
  }

#endif
