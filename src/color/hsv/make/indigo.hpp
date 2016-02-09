#ifndef color_hsv_make_indigo
#define color_hsv_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4B0082

     template< typename tag_name >
      inline
      void indigo( ::color::_internal::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 274.615385, 100, 50.9803922 } ) );

        color_parameter = local;
       }

    }
  }

#endif
