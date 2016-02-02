#ifndef color_rgb_make_beige
#define color_rgb_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 245.0/255.0, 245.0/255.0, 220.0/255.0 } ) - rgb(245,245,220) - #f5f5dc

     template< typename tag_name >
      inline
      void beige( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0xF5, 0xF5, 0xDC } ) );
        color_parameter = local;
       }

    }
  }

#endif 
