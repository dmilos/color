#ifndef color_YPbPr_make_crimson
#define color_YPbPr_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #DC143C

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::YPbPr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.330752157, 0.446088549, 0.879402039 } ) );

        color_parameter = local;
       }

    }
  }

#endif
