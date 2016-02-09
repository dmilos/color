#ifndef color_hsv_make_purple
#define color_hsv_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0.5 } ) - rgb(127,0,127) - #7F007F

     template< typename tag_name >
      inline
      void purple( ::color::_internal::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 300, 100, 50 } ) );

        color_parameter = local;
       }

    }
  }

#endif
