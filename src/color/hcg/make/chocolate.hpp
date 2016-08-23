#ifndef color_hcg_make_chocolate
#define color_hcg_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(209,104,29) - #D1681D

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 25, 70.5882352941176, 40 } ) );

        color_parameter = local;
       }

    }
  }

#endif
