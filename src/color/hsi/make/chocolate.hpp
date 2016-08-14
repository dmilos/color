#ifndef color_hsi_make_chocolate
#define color_hsi_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #D2691E

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 24.5036334553454, 73.9130434782609, 45.0980392156863 } ) );

        color_parameter = local;
       }

    }
  }

#endif
