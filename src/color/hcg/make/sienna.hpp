#ifndef color_hcg_make_sienna
#define color_hcg_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) - rgb(159,82,45) - #9F522D

     template< typename tag_name >
      inline
      void sienna( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 19.304347826087, 45.0980392156863, 32.1428571428571 } ) );

        color_parameter = local;
       }

    }
  }

#endif
