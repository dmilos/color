#ifndef color_cmy_make_chocolate
#define color_cmy_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #D2691E

     template< typename tag_name >
      inline
      void chocolate( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.176470588, 0.588235294, 0.882352941 } ) );

        color_parameter = local;
       }

    }
  }

#endif
