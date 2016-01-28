#ifndef color_cmyk_make_indigo
#define color_cmyk_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.423077, 1, 0 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 4 >( { 0x6b, 0xff, 0x00, 0x7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 4 >( { 0x6c4e, 0xffff, 0x0000, 0x7d7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 4 >( { 0x6c4ec4eb, 0xffffffff, 0x00000000, 0x7d7d7d7d } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 4 >( { 0x6c4ec4ec4ec4e800ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x7d7d7d7d7d7d8000ull } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.423077, 1, 0, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.423077, 1, 0, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.423077, 1, 0, 0.490196 } );
       }

    }
  }

#endif
