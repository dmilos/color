#ifndef color_gray_make_gainsboro
#define color_gray_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.858824, 0.858824, 0.858824 } ) - rgb(219,219,219) - #DBDBDB

     template< typename tag_name >
      inline
      void gainsboro( ::color::_internal::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.858823615 } ) );

        color_parameter = local;
       }

    }
  }

#endif