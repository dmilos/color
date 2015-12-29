#ifndef color_rgb_make_pink
#define color_rgb_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) 

      inline
      void pink( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1d;
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x3e18;
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff3f85cdu;
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff3f3f8585cdcdul;
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.803922, 0.521569, 0.247059 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.803922, 0.521569, 0.247059 } );
       }

      inline
      void pink( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.803922, 0.521569, 0.247059 } );
       }

    }
  }

#endif
