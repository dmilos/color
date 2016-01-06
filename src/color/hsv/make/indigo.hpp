#ifndef color_hsv_make_indigo
#define color_hsv_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7d;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x83f7;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff82ffc2u;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff8282ffffc347ul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 274.615, 100, 50.9804 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 274.615, 100, 50.9804 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 274.615, 100, 50.9804 } );
       }

    }
  }

#endif
