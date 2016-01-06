#ifndef color_yiq_make_ivory
#define color_yiq_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.941176 } ) - rgb(255,255,240) - #fffff0

      inline
      void ivory( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x5e;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x79fe;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7b83fdu;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7b83840efe47ul;
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.993294, 0.0188978, -0.018302 } );
       }

    }
  }

#endif
