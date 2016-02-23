#ifndef color_yiq_make_red
#define color_yiq_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #FF0000

     template< typename tag_name >
      inline
      void red( ::color::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.299, 0.595716135, 0.211456402 } ) );

        color_parameter = local;
       }

    }
  }

#endif
