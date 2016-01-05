#ifndef color_cmyk_make_thistle
#define color_cmyk_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) 

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2010;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x27001d00u;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x272700001da10000ul;
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.115741, 0, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.115741, 0, 0.152941 } );
       }

      inline
      void thistle( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.115741, 0, 0.152941 } );
       }

    }
  }

#endif
