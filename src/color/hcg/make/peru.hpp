#ifndef color_hcg_make_peru
#define color_hcg_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.8, 0.52, 0.25 } ) - rgb(204,132,63) - #CC843F

     template< typename tag_name >
      inline
      void peru( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 29.4545455, 68.75, 80 } ) );

        color_parameter = local;
       }

    }
  }

#endif
