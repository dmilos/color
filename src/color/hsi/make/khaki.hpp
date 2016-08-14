#ifndef color_hsi_make_khaki
#define color_hsi_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 0.9, 0.55 } ) - rgb(239,229,140) - #EFE58C

     template< typename tag_name >
      inline
      void khaki( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 54.9669249507772, 30.8900523560209, 79.5833333333333 } ) );

        color_parameter = local;
       }

    }
  }

#endif
