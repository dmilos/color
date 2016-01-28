#ifndef color_yiq_make_linen
#define color_yiq_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.948431, 0.03596, -0.00390895 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xf1, 0x87, 0x7e } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xf2cb, 0x87b9, 0x7f0a } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xf2cc65fe, 0x87ba044f, 0x7f0ae5b2 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xf2cc65ff9932c800ull, 0x87ba044fff577800ull, 0x7f0ae5b331192400ull } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

      inline
      void linen( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

    }
  }

#endif
