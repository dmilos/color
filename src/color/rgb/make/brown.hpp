#ifndef color_rgb_make_brown
#define color_rgb_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } ) 

      inline
      void brown( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc;
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x28b4;
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff2a2aa5u;
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff2a2a2a2aa5a5ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } );
       }

    }
  }

#endif
