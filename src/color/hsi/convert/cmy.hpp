#ifndef color_hsi_convert_cmy
#define color_hsi_convert_cmy

#include "../../_internal/convert.hpp"

#include "../../cmy/cmy.hpp"
#include "../../cmy/place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsi_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::hsi< hsi_tag_name >
       ,::color::category::cmy< cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::hsi< hsi_tag_name > category_left_type;
         typedef ::color::category::cmy< cmy_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hue_p        = ::color::place::_internal::hue<category_left_type >::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,intensity_p  = ::color::place::_internal::intensity<category_left_type>::position_enum
          };

         enum
          {
            cyan_p       = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,yellow_p     = ::color::place::_internal::yellow<category_right_type>::position_enum
           ,magenta_p    = ::color::place::_internal::magenta<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           // TODO
          }
      };

   }
 }

#endif
