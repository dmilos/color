#ifndef color_gray_make_peru
#define color_gray_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.8, 0.52, 0.25 } ) - rgb(204,132,63) - #CC843F

     template< typename tag_name >
      inline
      void peru( ::color::_internal::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.560061214 } ) );

        color_parameter = local;
       }

    }
  }

#endif