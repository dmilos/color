#ifndef color_hcg_make_gold
#define color_hcg_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #FFD700

     template< typename tag_name >
      inline
      void gold( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 0.793601215686275, 1.68457469203175, -0.553487935803796 } ) );

        color_parameter = local;
       }

    }
  }

#endif
