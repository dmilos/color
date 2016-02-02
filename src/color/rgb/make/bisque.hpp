#ifndef color_rgb_make_bisque
#define color_rgb_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 228.0/255.0, 196.0/255.0 } ) - rgb(255,228,196) - #ffe4c4

     template< typename tag_name >
      inline
      void bisque( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0xFF, 0xE4, 0xC4 } ) );

        color_parameter = local;
       }

    }
  }

#endif
