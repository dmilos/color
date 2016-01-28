#ifndef color_yiq_make_khaki
#define color_yiq_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.873451, 0.136748, -0.10152 } ) - rgb(240,230,140) - #f0e68c

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xde, 0x9c, 0x66 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xdf99, 0x9d61, 0x6722 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xdf9a7bc2, 0x9d61fea7, 0x6722686b } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xdf9a7bc371860000ull, 0x9d61fea7d1eb1800ull, 0x6722686be169a000ull } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.873451, 0.136748, -0.10152 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.873451, 0.136748, -0.10152 } );
       }

      inline
      void khaki( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.873451, 0.136748, -0.10152 } );
       }

    }
  }

#endif
