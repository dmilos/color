#ifndef color_rgb_make_white
#define color_rgb_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 1 } ) - rgb(255,255,255) - #ffffff

     template< typename tag_name >
      inline
      void white( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {// Same as Cyan
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0xFF, 0xFF, 0xFF } ) );

        color_parameter = local;
       }

    }
  }

#endif
