#ifndef color_cmy_make_indigo
#define color_cmy_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.705882, 1, 0.490196 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0xb3, 0xff, 0x7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0xb4b3, 0xffff, 0x7d7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0xb4b4b4b3, 0xffffffff, 0x7d7d7d7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0xb4b4b4b4b4b4b000ull, 0x0000000000000000ull, 0x7d7d7d7d7d7d8000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.705882, 1, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.705882, 1, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.705882, 1, 0.490196 } );
       }

    }
  }

#endif
