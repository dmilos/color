#ifndef color_gray_convert_hwb
#define color_gray_convert_hwb

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"






namespace color
 {
  namespace _internal
   {

    template
     <
       typename gray_tag_name
      ,typename hwb_tag_name
     >
     struct convert
      <
        ::color::category::gray<  gray_tag_name >
       ,::color::category::hwb< hwb_tag_name >
      >
      {
       public:
         typedef ::color::category::gray< gray_tag_name >    gray_category_type,  category_left_type;
         typedef ::color::category::hwb< hwb_tag_name >    hwb_category_type, category_right_type;
         typedef double scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          { // TODO 
           //container_left_trait_type::template set<0>( left, bound_left_trait_type::template minimum<0>() );
           //container_left_trait_type::template set<1>( left, bound_left_trait_type::template minimum<1>() );
           //container_left_trait_type::template set<2>( left, reformat_type::template process<2,0>( container_right_trait_type::template get<0>( right ) ) );
          }
      };

   }
 }

#endif
