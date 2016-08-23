#ifndef color_hcg_make_salmon
#define color_hcg_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.5, 0.447059 } ) - rgb(249,127,114) - #F97F72

     template< typename tag_name >
      inline
      void salmon( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 5.95588235294117, 53.3333333333333, 95.7983193277311 } ) );

        color_parameter = local;
       }

    }
  }

#endif
