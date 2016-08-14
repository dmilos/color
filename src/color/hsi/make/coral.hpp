#ifndef color_hsi_make_coral
#define color_hsi_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #FF7F4F

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 15.4585662302195, 48.6187845303867, 60.3333333333333 } ) );

        color_parameter = local;
       }

    }
  }

#endif
