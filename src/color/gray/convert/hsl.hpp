#ifndef color_gray_convert_hsl
#define color_gray_convert_hsl

#include "../category.hpp"
#include "../../hsl/category.hpp"

#include "../../_internal/convert.hpp"


//#include "../../hsl/category.hpp"
//#include "../../hsl/trait/container/container.hpp"
//#include "../../hsl/place/lightness.hpp"

#include "../../hsl/hsl.hpp"

#include "../../_internal/reformat.hpp"

#include "../place/place.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename gray_tag_name, typename hsl_tag_name >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::hsl<hsl_tag_name>
      >
       {
        public:
          typedef ::color::category::gray< gray_tag_name > category_left_type;
          typedef ::color::category::hsl<hsl_tag_name>     category_right_type;

          typedef ::color::trait::container<category_left_type>     container_left_trait_type;
          typedef ::color::trait::container<category_right_type>    container_right_trait_type;

          typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

          typedef typename container_left_trait_type::input_type         container_left_input_type;
          typedef typename container_right_trait_type::model_type  container_right_const_input_type;

          enum
           {
             lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
           };

          static void process
           (
             container_left_input_type         left
            ,container_right_const_input_type  right
           )
           {
            container_left_trait_type::template set<0>( left, reformat_type::template process<0,lightness_p>( container_right_trait_type::template get<lightness_p>( right ) ) );
           }
       };

   }
 }

#endif