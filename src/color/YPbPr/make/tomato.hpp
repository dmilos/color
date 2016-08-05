#ifndef color_YPbPr_make_tomato
#define color_YPbPr_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #FF6347

     template< typename tag_name >
      inline
      void tomato( ::color::model< ::color::category::YPbPr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.558498369, 0.34187031, 0.814810729 } ) );

        color_parameter = local;
       }

    }
  }

#endif
