#ifndef color_cmyk_make_khaki
#define color_cmyk_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 0.9, 0.55 } ) - rgb(239,229,140) - #EFE58C

     template< typename tag_name >
      inline
      void khaki( ::color::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.04, 0.413333333, 0.0625 } ) );

        color_parameter = local;
       }

    }
  }

#endif
