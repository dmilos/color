#ifndef color_YPbPr_make_turquoise
#define color_YPbPr_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25, 0.875, 0.8125 } ) - rgb(63,223,207) - #3FDFCF

     template< typename tag_name >
      inline
      void turquoise( ::color::model< ::color::category::YPbPr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.68107875, 0.57420975, 0.192582 } ) );

        color_parameter = local;
       }

    }
  }

#endif
