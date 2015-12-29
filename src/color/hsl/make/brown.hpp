#ifndef color_hsl_make_brown
#define color_hsl_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) 

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
        color_parameter.container() = std::array<float,3>( { 0, 0.594203, 0.405882 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.594203, 0.405882 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.594203, 0.405882 } );
       }

    }
  }

#endif
