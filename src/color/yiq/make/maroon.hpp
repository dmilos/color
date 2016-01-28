#ifndef color_yiq_make_maroon
#define color_yiq_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.1495, 0.297858, 0.105728 } ) - rgb(127,0,0) - #7f0000

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x26, 0xbf, 0x99 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x2645, 0xbfff, 0x99e4 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x2645a1ca, 0xbfffffff, 0x99e57855 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x2645a1cac0831200ull, 0xc000000000000000ull, 0x99e5785659004000ull } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.1495, 0.297858, 0.105728 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.1495, 0.297858, 0.105728 } );
       }

      inline
      void maroon( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.1495, 0.297858, 0.105728 } );
       }

    }
  }

#endif
