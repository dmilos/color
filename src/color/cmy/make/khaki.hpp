#ifndef color_cmy_make_khaki
#define color_cmy_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 0.9, 0.55 } ) - rgb(239,229,140) - #EFE58C

     template< typename tag_name >
      inline
      void khaki( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.0625, 0.1, 0.45 } ) );

        color_parameter = local;
       }

    }
  }

#endif
