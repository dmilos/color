#ifndef color_rgb_make_chocolate
#define color_rgb_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 210.0/255.0, 105.0/255.0, 30.0/255.0 } ) - rgb(210,105,30) - #d2691e

     template< typename tag_name >
      inline
      void chocolate( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type( { 0xD2, 0x69, 0x1E } ) );

        color_parameter = local;
       }

    }
  }

#endif
