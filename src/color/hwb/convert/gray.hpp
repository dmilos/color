#ifndef color_hwb_convert_gray
#define color_hwb_convert_gray

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/operation/invert.hpp"





namespace color
 {
  namespace _internal
   {

    template
     <
       typename  hwb_tag_name
      ,typename gray_tag_name
     >
     struct convert
      <
        ::color::category::hwb< hwb_tag_name >
       ,::color::category::gray<   gray_tag_name >
      >
      {
       public:
         typedef ::color::category::hwb<   hwb_tag_name > hwb_category_type, category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;

         typedef typename ::color::trait::scalar< hwb_category_type >::instance_type scalar_type;

         typedef ::color::category::hwb< scalar_type > hwbSCALAR_category_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;
         typedef ::color::_internal::reformat< category_left_type, hwbSCALAR_category_type >    reformatHWB_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformatHWB_type::template process< 0, 0 >( 0 ) );
           container_left_trait_type::template set<1>( left, reformat_type::template    process< 1, 0 >(                                     container_right_trait_type::template get<0>( right )   ) );
           container_left_trait_type::template set<2>( left, reformat_type::template    process< 2, 0 >( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
          }
      };

   }
 }

#endif
