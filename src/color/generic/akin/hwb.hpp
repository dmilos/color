#ifndef color_akin_hwb
#define color_akin_hwb

// ::color::akin::hwb< non_hwb_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template
     <
      typename category_name

     >
     struct hwb
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
