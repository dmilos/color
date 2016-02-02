#ifndef color_rgb_make_azure
#define color_rgb_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 240.0/255.0, 1, 1 } ) - rgb(240,255,255) - #f0ffff

     template< typename tag_name >
      inline
      void azure( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type ( { 0xF0, 0xFF, 0xFF } ) );

        color_parameter = local;
       }

    }
  }

#endif
