#ifndef color_rgb_make_yellow
#define color_rgb_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #ffff00

     template< typename tag_name >
      inline
      void yellow( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {// Same as Cyan
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0xFF, 0xFF, 0x00 } ) );

        color_parameter = local;
       }

    }
  }

#endif 
