#ifndef color_yiq_make_crimson
#define color_yiq_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #DC143C

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.330823529, 0.416834098, 0.214653593 } ) );

        color_parameter = local;
       }

    }
  }

#endif
