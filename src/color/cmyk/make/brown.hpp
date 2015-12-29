#ifndef color_cmyk_make_brown
#define color_cmyk_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) 

      inline
      void brown( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x59bebe00;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x5bb0;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffbebe00u;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffbed5bed50000ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.745455, 0.745455, 0.352941 } );
       }

    }
  }

#endif
