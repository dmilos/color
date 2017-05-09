#ifndef color_xyy_convert_gray
#define color_xyy_convert_gray

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename xyy_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::xyy< xyy_tag_name >
       ,::color::category::gray<   gray_tag_name >
      >
      { // TODO
       public:
         typedef ::color::category::xyy<   xyy_tag_name > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;
         typedef double scalar_type;
         typedef ::color::category::xyy< scalar_type > xyySCALAR_category_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;
         typedef ::color::_internal::reformat< category_left_type, xyySCALAR_category_type, scalar_type >    reformatXYY_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         enum
          {
            gray_p       = ::color::place::_internal::gray<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          { // TODO ???
           container_left_trait_type::template set<0>( left, reformat_type::template process< 0, 0 >( container_right_trait_type::template get<gray_p>( right ) ) );
           container_left_trait_type::template set<1>( left, reformatXYY_type::template process< 1, 1 >( 0 ) );
           container_left_trait_type::template set<2>( left, reformatXYY_type::template process< 2, 2 >( 0 ) );
          }
      };

   }
 }

#endif
