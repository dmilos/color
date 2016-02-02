#ifndef color_rgb_make_gray
#define color_rgb_make_gray

// ::color::make::gray( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7f7f7f

     template< typename tag_name >
      inline
      void gray50( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type( { 0x7F, 0x7F, 0x7F } ) );

        color_parameter = local;
       }

    }
  }

#endif
