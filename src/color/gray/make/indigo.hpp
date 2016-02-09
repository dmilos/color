#ifndef color_gray_make_indigo
#define color_gray_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4B0082

     template< typename tag_name >
      inline
      void indigo( ::color::_internal::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.099345951 } ) );

        color_parameter = local;
       }

    }
  }

#endif
