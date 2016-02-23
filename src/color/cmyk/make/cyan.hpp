#ifndef color_cmyk_make_cyan
#define color_cmyk_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00FFFF

     template< typename tag_name >
      inline
      void cyan( ::color::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 1, 0, 0, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif
