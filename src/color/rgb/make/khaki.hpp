#ifndef color_rgb_make_khaki
#define color_rgb_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 240.0/255.0, 230.0/255.0, 140.0/255.0 } ) - rgb(240,230,140) - #F0E68C

     template< typename tag_name >
      inline
      void khaki( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xF0, 0xE6, 0x8C } ) );

        color_parameter = local;
       }

    }
  }

#endif
