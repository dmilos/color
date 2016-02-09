#ifndef color_gray_make_gold
#define color_gray_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #FFD700

     template< typename tag_name >
      inline
      void gold( ::color::_internal::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.815644363 } ) );

        color_parameter = local;
       }

    }
  }

#endif
