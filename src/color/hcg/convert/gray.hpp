#ifndef color_hcg_convert_gray
#define color_hcg_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hcg_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::hcg<   hcg_tag_name >
       ,::color::category::gray< gray_tag_name >
      >
      {
       public:
         typedef ::color::category::hcg<   hcg_tag_name > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hue_p    = ::color::place::_internal::hue<category_left_type>::position_enum
           ,chroma_p = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,gray_p   = ::color::place::_internal::gray<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type g = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );

           static auto       hue    = diverse_type::template process<hue_p   >( 0 );
           static auto const chroma = diverse_type::template process<chroma_p>( 0 );
                  auto const gray   = diverse_type::template process<gray_p  >( g );

           container_left_trait_type::template set<hue_p   >( left, hue    );
           container_left_trait_type::template set<chroma_p>( left, chroma );
           container_left_trait_type::template set<gray_p  >( left, gray   );
          }
      };

   }
 }

#endif
