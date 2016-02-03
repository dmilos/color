#ifndef color_rgb_make_plum
#define color_rgb_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 221.0/255.0, 160.0/255.0, 221.0/255.0 } ) - rgb(221,160,221) - #DDA0DD

     template< typename tag_name >
      inline
      void plum( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xDD, 0xA0, 0xDD } ) );

        color_parameter = local;
       }

    }
  }

#endif
