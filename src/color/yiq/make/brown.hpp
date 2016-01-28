#ifndef color_yiq_make_brown
#define color_yiq_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.308929, 0.287345, 0.101997 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4e, 0xbd, 0x98 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4f15, 0xbdbd, 0x98fa } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4f15ff77, 0xbdbdbdbd, 0x98fb7d1f } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4f15ff784d4b4000ull, 0xbdbdbdbdbdbdc000ull, 0x98fb7d20199fe000ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.308929, 0.287345, 0.101997 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.308929, 0.287345, 0.101997 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.308929, 0.287345, 0.101997 } );
       }

    }
  }

#endif
