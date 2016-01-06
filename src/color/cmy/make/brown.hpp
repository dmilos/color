#ifndef color_cmy_make_brown
#define color_cmy_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xaa;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd32a;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd5d559u;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffd5d5d5d55a59ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.352941, 0.835294, 0.835294 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.352941, 0.835294, 0.835294 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.352941, 0.835294, 0.835294 } );
       }

    }
  }

#endif
