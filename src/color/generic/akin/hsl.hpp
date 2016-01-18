#ifndef color_akin_hsl
#define color_akin_hsl

// ::color::akin::hsl< non_hsl_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct hsl
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
