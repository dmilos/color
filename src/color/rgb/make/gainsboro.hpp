#ifndef color_rgb_make_gainsboro
#define color_rgb_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.86, 0.86, 0.86 } ) - rgb(219,219,219) - #dbdbdb

     template< typename tag_name >
      inline
      void gainsboro( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type( { 0xDB, 0xDB, 0xDB } ) );

        color_parameter = local;
       }

    }
  }

#endif
