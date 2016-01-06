#ifndef color_yiq_make_linen
#define color_yiq_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.941176, 0.901961 } ) - rgb(250,240,230) - #faf0e6

      inline
      void linen( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7e1d;
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7e87f1u;
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7f0a87b9f2cbul;
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

      inline
      void linen( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.948431, 0.03596, -0.00390895 } );
       }

    }
  }

#endif
