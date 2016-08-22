#ifndef color_gray_convert_hsl
#define color_gray_convert_hsl

#include "../category.hpp"
#include "../../hcg/category.hpp"

#include "../../_internal/convert.hpp"


//#include "../../hcg/category.hpp"
//#include "../../hcg/trait/container/container.hpp"
//#include "../../hcg/place/lightness.hpp"

#include "../../hcg/hcg.hpp"

#include "../../_internal/reformat.hpp"

#include "../place/place.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename gray_tag_name, typename hcg_tag_name >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::hcg<hcg_tag_name>
      >
       {
        public:
          typedef ::color::category::gray< gray_tag_name > category_left_type;
          typedef ::color::category::hcg<hcg_tag_name>     category_right_type;
          typedef  double scalar_type;

          typedef ::color::trait::container<category_left_type>     container_left_trait_type;
          typedef ::color::trait::container<category_right_type>    container_right_trait_type;

          typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;

          typedef typename container_left_trait_type::input_type         container_left_input_type;
          typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

          enum
           {
             gray_p = ::color::place::_internal::gray<category_right_type>::position_enum
           };

          static void process
           (
             container_left_input_type         left
            ,container_right_const_input_type  right
           )
           {
            container_left_trait_type::template set<0>( left, reformat_type::template process<0,gray_p>( container_right_trait_type::template get<gray_p>( right ) ) );
           }
       };

   }
 }

#endif