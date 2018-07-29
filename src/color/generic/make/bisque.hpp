#ifndef  color_generic_make_bisque
#define color_generic_make_bisque

// ::color::make::bisque( c )

// TODO #include "model.hpp"
#include "../constant/bisque.hpp"


 namespace color
  {
   namespace constant
    {

     template< typename category_name >
      struct make< ::color::constant::bisque_t, category_name >
       {
        typedef category_name                         category_type;

        typedef ::color::model<category_type>            model_type;
        typedef ::color::rgb<double>                       rgb_type;
        typedef ::color::constant::bisque_t           constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;


        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 1, 0.875, 0.75 } };
          container = s_model.container();
         }
       };

    }
  }

#endif
