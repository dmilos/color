#ifndef color_yiq_make_ivory
#define color_yiq_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.993294, 0.0188978, -0.018302 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xfd, 0x83, 0x7b } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xfe47, 0x840e, 0x7b83 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xfe4885f5, 0x840f7eef, 0x7b846882 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xfe4885f69a717800ull, 0x840f7ef0777bb000ull, 0x7b846882a10f1800ull } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

      inline
      void ivory( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

    }
  }

#endif
