#ifndef color_hcg_make_plum
#define color_hcg_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #DDA0DD

     template< typename tag_name >
      inline
      void plum( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 300, 47.2868217054264, 74.7058823529412 } ) );

        color_parameter = local;
       }

    }
  }

#endif
