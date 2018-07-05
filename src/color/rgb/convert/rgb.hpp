#ifndef color_rgb_convert_rgb
#define color_rgb_convert_rgb

#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
       <
         ::color::category::rgb< tag_left_name >
        ,::color::category::rgb< tag_right_name>
       >
       {
        public:
          typedef ::color::category::rgb< tag_left_name > category_left_type;
          typedef ::color::category::rgb< tag_right_name> category_right_type;

          typedef ::color::trait::container<category_left_type>     container_left_trait_type;
          typedef ::color::trait::container<category_right_type>    container_right_trait_type;

          typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

          typedef typename container_left_trait_type::input_type         container_left_input_type;
          typedef typename container_right_trait_type::model_type  container_right_const_input_type;

          static void process
           (
             container_left_input_type         left
            ,container_right_const_input_type  right
           )
           {
            enum
             {
               rl = ::color::place::_internal::red<category_left_type>::position_enum
              ,gl = ::color::place::_internal::green<category_left_type>::position_enum
              ,bl = ::color::place::_internal::blue<category_left_type>::position_enum
              ,rr = ::color::place::_internal::red<category_right_type>::position_enum
              ,gr = ::color::place::_internal::green<category_right_type>::position_enum
              ,br = ::color::place::_internal::blue<category_right_type>::position_enum
             };

            container_left_trait_type::template set<rl>( left, reformat_type::template process<rl,rr>( container_right_trait_type::template get<rr>( right ) ) );
            container_left_trait_type::template set<gl>( left, reformat_type::template process<gl,gr>( container_right_trait_type::template get<gr>( right ) ) );
            container_left_trait_type::template set<bl>( left, reformat_type::template process<bl,br>( container_right_trait_type::template get<br>( right ) ) );
           }
        };
   }
 }

#endif