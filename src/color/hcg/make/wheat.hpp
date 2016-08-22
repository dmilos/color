#ifndef color_hcg_make_wheat
#define color_hcg_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) - rgb(245,222,179) - #F5DEB3

     template< typename tag_name >
      inline
      void wheat( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 39.0909090909091, 76.7441860465116, 83.1372549019608 } ) );

        color_parameter = local;
       }

    }
  }

#endif
