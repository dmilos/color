#ifndef color_hcg_make_beige
#define color_hcg_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #F5F5DC

     template< typename tag_name >
      inline
      void beige( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 60, 55.5555555555556, 91.1764705882353 } ) );

        color_parameter = local;
       }

    }
  }

#endif
