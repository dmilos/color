#ifndef color_cmyk_make_blue
#define color_cmyk_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000FF

     template< typename tag_name >
      inline
      void blue( ::color::_internal::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 1, 1, 0, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif
