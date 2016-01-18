#ifndef color_akin_cmyk
#define color_akin_cmyk

// ::color::akin::cmyk< non_cmyk_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct cmyk
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
