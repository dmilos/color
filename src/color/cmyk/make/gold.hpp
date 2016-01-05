#ifndef color_cmyk_make_gold
#define color_cmyk_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.843137, 0 } ) 

      inline
      void gold( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x30;
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf20;
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2800u;
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff28280000ul;
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.156863, 1, 0 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.156863, 1, 0 } );
       }

      inline
      void gold( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.156863, 1, 0 } );
       }

    }
  }

#endif
