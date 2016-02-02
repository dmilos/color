#ifndef color_rgb_make_aquamarine
#define color_rgb_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 212.0/255.0 } ) - rgb(127,255,212) - #7fffd4

     template< typename tag_name >
      inline
      void aquamarine( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0x7F, 0xFF, 0xD4 } ) );

        color_parameter = local;
       }

    }
  }

#endif
