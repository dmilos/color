#ifndef color_akin_LuvCH
#define color_akin_LuvCH

// ::color::akin::LuvCH< non_LuvCH_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct LuvCH
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif
