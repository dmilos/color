#ifndef color_rgb_make_tomato
#define color_rgb_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255,  99.0/255,  71.0/255.0 } ) - rgb(255,99,71) - #FF6347

     template< typename tag_name >
      inline
      void tomato( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFF, 0x63, 0x47 } ) );

        color_parameter = local;
       }

    }
  }

#endif
