#ifndef color_yiq_make_bisque
#define color_yiq_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.911471, 0.103391, -0.0166548 } ) - rgb(255,228,196) - #ffe4c4

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xe8, 0x95, 0x7b } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xe955, 0x9636, 0x7beb } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xe95622ee, 0x963724e3, 0x7bebb128 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xe95622efbc895800ull, 0x963724e3e1c89800ull, 0x7bebb128f5fc1c00ull } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

      inline
      void bisque( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.911471, 0.103391, -0.0166548 } );
       }

    }
  }

#endif
