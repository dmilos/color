#ifndef color_hsv_make_violet
#define color_hsv_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) 

      inline
      void violet( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9d;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xe9d9;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffee73d4u;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffeeee742ad554ul;
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.833333, 0.453782, 0.933333 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.833333, 0.453782, 0.933333 } );
       }

      inline
      void violet( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.833333, 0.453782, 0.933333 } );
       }

    }
  }

#endif

