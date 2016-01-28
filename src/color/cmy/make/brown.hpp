#ifndef color_cmy_make_brown
#define color_cmy_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.352941, 0.835294, 0.835294 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x59, 0xd5, 0xd5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x5a59, 0xd5d5, 0xd5d5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x5a5a5a59, 0xd5d5d5d5, 0xd5d5d5d5 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0x5a5a5a5a5a5a5800ull, 0xd5d5d5d5d5d5d800ull, 0xd5d5d5d5d5d5d800ull } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.352941, 0.835294, 0.835294 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.352941, 0.835294, 0.835294 } );
       }

      inline
      void brown( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.352941, 0.835294, 0.835294 } );
       }

    }
  }

#endif
