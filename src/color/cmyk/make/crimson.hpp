#ifndef color_cmyk_make_crimson
#define color_cmyk_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #DC143C

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.909090909, 0.727272727, 0.137254902 } ) );

        color_parameter = local;
       }

    }
  }

#endif
