#ifndef color_cmy_make_khaki
#define color_cmy_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0588235, 0.0980392, 0.45098 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x0f, 0x18, 0x72 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0f0f, 0x1918, 0x7372 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0f0f0f0f, 0x19191918, 0x73737372 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0f0f0f0f0f0f1000ull, 0x1919191919191800ull, 0x7373737373737000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0588235, 0.0980392, 0.45098 } );
       }

    }
  }

#endif
