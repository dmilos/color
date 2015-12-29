#ifndef color_hsv_make_pink
#define color_hsv_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) 

      inline
      void pink( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xa0;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcaa2;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffcdb014u;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffcdcdb1521508ul;
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0821596, 0.692683, 0.803922 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0821596, 0.692683, 0.803922 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0821596, 0.692683, 0.803922 } );
       }

    }
  }

#endif
