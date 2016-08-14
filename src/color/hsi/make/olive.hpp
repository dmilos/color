#ifndef color_hsi_make_olive
#define color_hsi_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7F7F00

     template< typename tag_name >
      inline
      void olive( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 60, 100, 33.3333333333333 } ) );

        color_parameter = local;
       }

    }
  }

#endif
