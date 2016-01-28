#ifndef color_yiq_make_lime
#define color_yiq_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.587, -0.274453, -0.522591 } ) - rgb(0,255,0) - #00ff00

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x95, 0x44, 0x00 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x9645, 0x4507, 0x0000 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x9645a1ca, 0x45076df7, 0x00000000 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x9645a1cac0831000ull, 0x45076df7ef368800ull, 0x0000000000000000ull } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.587, -0.274453, -0.522591 } );
       }

      inline
      void lime( ::color::_internal::model< ::color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.587, -0.274453, -0.522591 } );
       }

    }
  }

#endif
