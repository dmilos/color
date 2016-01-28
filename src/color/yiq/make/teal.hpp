#ifndef color_yiq_make_teal
#define color_yiq_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.3505, -0.297858, -0.105728 } ) - rgb(0,127,127) - #007f7f

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x59, 0x3f, 0x65 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x59ba, 0x3fff, 0x661a } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x59ba5e34, 0x3fffffff, 0x661a87a9 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x59ba5e353f7cec00ull, 0x4000000000000000ull, 0x661a87a9a6ffc000ull } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.3505, -0.297858, -0.105728 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.3505, -0.297858, -0.105728 } );
       }

      inline
      void teal( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.3505, -0.297858, -0.105728 } );
       }

    }
  }

#endif
