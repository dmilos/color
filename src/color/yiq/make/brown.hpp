#ifndef color_yiq_make_brown
#define color_yiq_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.647059, 0.164706, 0.164706 } ) - rgb(165,42,42) - #a52a2a

      inline
      void brown( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x6a;
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x96c9;
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff98bd4eu;
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff98fabdbd4f15ul;
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.308929, 0.287345, 0.101997 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.308929, 0.287345, 0.101997 } );
       }

      inline
      void brown( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.308929, 0.287345, 0.101997 } );
       }

    }
  }

#endif
