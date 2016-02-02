#ifndef color_rgb_make_indigo
#define color_rgb_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 1, 240.0/255.0 } ) - rgb(255,255,240) - #fffff0

     template< typename tag_name >
      inline
      void indigo( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type( { 0xFF, 0xFF, 0xF0 } ) );

        color_parameter = local;
       }

    }
  }

#endif 
