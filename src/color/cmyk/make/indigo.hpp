#ifndef color_cmyk_make_indigo
#define color_cmyk_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.294118, 0, 0.509804 } ) 

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x4d;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x70f6;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x7d00ff6bu;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x7d7d0000ffff6c4eul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0.423077, 1, 0, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0.423077, 1, 0, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0.423077, 1, 0, 0.490196 } );
       }

    }
  }

#endif
