#ifndef color_generic_akin_rgb
#define color_generic_akin_rgb

// ::color::akin::rgb< non_rgb_category >::akin_cetegory_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct rgb
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
