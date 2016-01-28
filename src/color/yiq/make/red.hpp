#ifndef color_yiq_make_red
#define color_yiq_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.299, 0.595716, 0.211456 } ) - rgb(255,0,0) - #ff0000

      inline
      void red( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4c, 0xff, 0xb3 } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4c8a, 0xffff, 0xb3ca } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4c8b4395, 0xffffffff, 0xb3caf0ab } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x4c8b439581062400ull, 0x0000000000000000ull, 0xb3caf0acb2008000ull } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.299, 0.595716, 0.211456 } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.299, 0.595716, 0.211456 } );
       }

      inline
      void red( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.299, 0.595716, 0.211456 } );
       }

    }
  }

#endif
