#ifndef color_yiq_make_snow
#define color_yiq_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.986255, 0.0116807, 0.0041462 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfb, 0x82, 0x80 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfc7a, 0x8282, 0x8103 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfc7b3384, 0x82828282, 0x8103faad } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfc7b338570f61000ull, 0x8282828282828800ull, 0x8103faae0d879000ull } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

      inline
      void snow( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.986255, 0.0116807, 0.0041462 } );
       }

    }
  }

#endif
