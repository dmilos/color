#ifndef color_cmy_make_black
#define color_cmy_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0 } ) - rgb(0,0,0) - #000000

     template< typename tag_name >
      inline
      void black( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 1, 1, 1 } ) );

        color_parameter = local;
       }

    }
  }

#endif
