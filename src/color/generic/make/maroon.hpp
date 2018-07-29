#ifndef  color_generic_make_maroon
#define color_generic_make_maroon

// ::color::make::maroon( c )

// TODO #include "model.hpp"
#include "../constant/maroon.hpp"


 namespace color
  {
   namespace constant
    {

     template< typename category_name >
      struct make< ::color::constant::maroon_t, category_name >
       {
        typedef category_name                         category_type;
        typedef ::color::model<category_type>            model_type;
        typedef ::color::rgb<double>                       rgb_type;
        typedef ::color::constant::maroon_t           constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 0.5, 0, 0 } };
          container = s_model.container();
         }
       };

     template< typename category_name >
      struct make< ::color::constant::x11::maroon_t, category_name >
       {
        typedef category_name                        category_type;
        typedef ::color::model<category_type>           model_type;
        typedef ::color::rgb<double>                      rgb_type;
        typedef ::color::constant::x11::maroon_t     constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 0.69, 0.19, 0.38 } };

          container = s_model.container();
         }
       };

    }
  }

#endif
