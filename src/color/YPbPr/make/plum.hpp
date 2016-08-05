#ifndef color_YPbPr_make_plum
#define color_YPbPr_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #DDA0DD

     template< typename tag_name >
      inline
      void plum( ::color::model< ::color::category::YPbPr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.726292271, 0.579242678, 0.600156737 } ) );

        color_parameter = local;
       }

    }
  }

#endif
