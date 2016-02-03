#ifndef color_rgb_make_thistle
#define color_rgb_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 216.0/255.0, 191.0/255.0, 216.0/255.0 } ) - rgb(216,191,216) - #D8BFD8

     template< typename tag_name >
      inline
      void thistle( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xD8, 0xBF, 0xD8 } ) );

        color_parameter = local;
       }

    }
  }

#endif
