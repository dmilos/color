#ifndef color_yiq_make_tomato
#define color_yiq_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #ff6347

      inline
      void tomato( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6b;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x9731;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff96d58eu;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff9750d5e18f02ul;
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

      inline
      void tomato( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.558635, 0.399714, 0.0951978 } );
       }

    }
  }

#endif
