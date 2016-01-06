#ifndef color_cmy_make_indigo
#define color_cmy_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7c;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7bf5;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7dffb3u;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7d7dffffb4b3ul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.705882, 1, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.705882, 1, 0.490196 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.705882, 1, 0.490196 } );
       }

    }
  }

#endif
