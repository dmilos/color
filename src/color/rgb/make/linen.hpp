#ifndef color_rgb_make_linen
#define color_rgb_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 250.0/255.0, 240.0/255.0, 230.0/255.0 } ) - rgb(250,240,230) - #FAF0E6

     template< typename tag_name >
      inline
      void linen( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFA, 0xF0, 0xE6 } ) );

        color_parameter = local;
       }

    }
  }

#endif
