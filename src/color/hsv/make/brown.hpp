#ifndef color_hsv_make_brown
#define color_hsv_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) 

      inline
      void brown( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x68;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xa2e0;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffa5be00u;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffa5a5bed50000ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0.745455, 0.647059 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0.745455, 0.647059 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0.745455, 0.647059 } );
       }

    }
  }

#endif
