#ifndef color_xyz_make_indigo
#define color_xyz_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x11;
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcd4b;
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffd75262u;
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffda15532163f7ul;
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 7.85732, 1.835, 16.1153 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 7.85732, 1.835, 16.1153 } );
       }

      inline
      void indigo( ::color::_internal::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 7.85732, 1.835, 16.1153 } );
       }

    }
  }

#endif
