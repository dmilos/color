#ifndef color_akin_tsl
#define color_akin_tsl

// ::color::akin::tsl< non_tsl_category >::akin_cetegory_type;

namespace color
 {
  namespace akin
   {

    template
     <
       typename category_name
     >
     struct tsl
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
