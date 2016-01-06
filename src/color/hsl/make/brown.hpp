#ifndef color_hsl_make_brown
#define color_hsl_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x60;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x6640;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff679700u;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff67e7981d0000ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 59.4203, 40.5882 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 59.4203, 40.5882 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 59.4203, 40.5882 } );
       }

    }
  }

#endif
