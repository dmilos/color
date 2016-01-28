#ifndef color_yiq_make_violet
#define color_yiq_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.684722, 0.116239, 0.221333 } ) - rgb(238,130,238) - #ee82ee

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xae, 0x98, 0xb5 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xaf49, 0x98f9, 0xb635 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xaf49e9a7, 0x98f9d772, 0xb6363635 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xaf49e9a81ee79800ull, 0x98f9d772d9eef000ull, 0xb636363636363800ull } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.684722, 0.116239, 0.221333 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.684722, 0.116239, 0.221333 } );
       }

      inline
      void violet( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.684722, 0.116239, 0.221333 } );
       }

    }
  }

#endif
