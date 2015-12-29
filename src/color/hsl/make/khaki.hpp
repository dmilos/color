#ifndef color_hsl_make_khaki
#define color_hsl_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.941176, 0.901961, 0.54902 } ) 

      inline
      void khaki( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa9;
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xbae4;
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbec426u;
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbebec4eb2666ul;
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.15, 0.769231, 0.745098 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.15, 0.769231, 0.745098 } );
       }

      inline
      void khaki( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.15, 0.769231, 0.745098 } );
       }

    }
  }

#endif
