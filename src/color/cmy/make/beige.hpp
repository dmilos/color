#ifndef color_cmy_make_beige
#define color_cmy_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.0392157, 0.0392157, 0.137255 } ) - rgb(245,245,220) - #f5f5dc

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x09, 0x09, 0x22 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x0a09, 0x0a09, 0x2322 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x0a0a0a09, 0x0a0a0a09, 0x23232322 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x0a0a0a0a0a0a0800ull, 0x0a0a0a0a0a0a0800ull, 0x2323232323232000ull } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

      inline
      void beige( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0392157, 0.0392157, 0.137255 } );
       }

    }
  }

#endif
