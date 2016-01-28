#ifndef color_rgb_make_indigo
#define color_rgb_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } ) - rgb(75,0,130) - #4b0082

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint8_t, 3 >( { 0x4b, 0x00, 0x82 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint16_t, 3 >( { 0x4b4b, 0x0000, 0x8282 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint32_t, 3 >( { 0x4b4b4b4b, 0x00000000, 0x82828282 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::array< std::uint64_t, 3 >( { 0, 0, 0 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

      inline
      void indigo( ::color::_internal::model< ::color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } );
       }

    }
  }

#endif
