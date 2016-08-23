#ifndef color_hcg_make_orchid
#define color_hcg_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(217,111,214) - #D96FD6

     template< typename tag_name >
      inline
      void orchid( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 302.264150943396, 41.5686274509804, 75.1677852348993 } ) );

        color_parameter = local;
       }

    }
  }

#endif
