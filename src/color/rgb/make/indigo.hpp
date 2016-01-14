#ifndef color_rgb_make_indigo
#define color_rgb_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x42;
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7812;
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff82004bu;
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff828200004b4bul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

    }
  }

#endif
