#ifndef color_rgb_make_ivory
#define color_rgb_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 1, 240.0/255.0 } ) - rgb(255,255,240) - #fffff0

     template< typename tag_name >
      inline
      void ivory( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 1, 1, 0.9375 } ) );

        color_parameter = local;
       }

    }
  }

#endif
