#ifndef color_gray_convert_hwb
#define color_gray_convert_hwb

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/operation/invert.hpp" 





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

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;
         typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformat_type::template process<0,2>( invert_type::template component<2>( container_right_trait_type::template get<2>( right ) ) ) );
          }
      };

   }
 }

#endif
