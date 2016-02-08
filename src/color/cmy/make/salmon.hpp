#ifndef color_cmy_make_salmon
#define color_cmy_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.5, 0.447059 } ) - rgb(250,127,114) - #FA7F72

     template< typename tag_name >
      inline
      void salmon( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_type;
        typedef ::color::_internal::model< category_type > model_type;

        static model_type local( ::color::make::salmon< ::color::category::rgb_double >() );

        color_parameter = local;
       }

    }
  }

#endif
