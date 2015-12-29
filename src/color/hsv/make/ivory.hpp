#ifndef color_hsv_make_ivory
#define color_hsv_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 1, 0.941176 } ) 

      inline
      void ivory( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc1;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfc25;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff0f2au;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff0f0f2aaaul;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.166667, 0.0588235, 1 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.166667, 0.0588235, 1 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.166667, 0.0588235, 1 } );
       }

    }
  }

#endif
