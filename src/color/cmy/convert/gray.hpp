#ifndef color_cmy_convert_gray
#define color_cmy_convert_gray

#include "../category.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::gray<gray_tag_name>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name > category_left_type;
         typedef ::color::category::gray<gray_tag_name> category_right_type;
         typedef double scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::operation::_internal::invert< category_right_type >    invert_type;
         typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
           container_left_trait_type::template set<1>( left, reformat_type::template process<1,0>( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
           container_left_trait_type::template set<2>( left, reformat_type::template process<2,0>( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
          }
      };

   }
 }

#endif
