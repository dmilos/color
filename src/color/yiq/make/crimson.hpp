#ifndef color_yiq_make_crimson
#define color_yiq_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.330824, 0.416834, 0.214654 } ) - rgb(220,20,60) - #dc143c

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x54, 0xd8, 0xb3 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x54b0, 0xd98f, 0xb492 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x54b0d9cf, 0xd9906737, 0xb49369d5 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x54b0d9cf92217c00ull, 0xd99067387b1a9800ull, 0xb49369d5c5055800ull } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.330824, 0.416834, 0.214654 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.330824, 0.416834, 0.214654 } );
       }

      inline
      void crimson( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.330824, 0.416834, 0.214654 } );
       }

    }
  }

#endif
