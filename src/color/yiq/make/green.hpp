#ifndef color_yiq_make_green
#define color_yiq_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.2935, -0.137226, -0.261296 } ) - rgb(0,127,0) - #007f00

      inline
      void green( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4a, 0x62, 0x3f } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4b22, 0x6283, 0x3fff } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4b22d0e5, 0x6283b6fb, 0x3fffffff } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4b22d0e560418800ull, 0x6283b6fbf79b4400ull, 0x4000000000000000ull } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.2935, -0.137226, -0.261296 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.2935, -0.137226, -0.261296 } );
       }

      inline
      void green( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.2935, -0.137226, -0.261296 } );
       }

    }
  }

#endif
