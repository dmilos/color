#ifndef  color_generic_make_linen
#define color_generic_make_linen

// ::color::make::linen( c )

// TODO #include "model.hpp"
#include "../constant/linen.hpp"


 namespace color
  {
   namespace constant
    {

     template< typename category_name >
      struct make< ::color::constant::linen_t, category_name >
       {
        typedef category_name                         category_type;
        
        typedef ::color::model<category_type>            model_type;
        typedef ::color::rgb<double>                       rgb_type;
        typedef ::color::constant::linen_t      constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

        
        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 250.0/255.0, 0.9375, 0.9 } };
          container = s_model.container();
         }
       };

    }
  }


#endif
