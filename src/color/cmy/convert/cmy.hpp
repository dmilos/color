#ifndef color_cmy_convert_cmy
#define color_cmy_convert_cmy

#include "../category.hpp"

#include "../../_internal/convert.hpp"





#include "../place/place.hpp"

#include "../trait/container.hpp"
#include "../../_internal/reformat.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
      <
        ::color::category::cmy< tag_left_name >
       ,::color::category::cmy< tag_right_name>
      >
      {
       public:
         typedef ::color::category::cmy< tag_left_name > category_left_type;
         typedef ::color::category::cmy< tag_right_name> category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
            cl_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,ml_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           ,yl_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         enum
          {
            cr_p  = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,mr_p  = ::color::place::_internal::magenta<category_right_type>::position_enum
           ,yr_p  = ::color::place::_internal::yellow<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<cl_p>( left, reformat_type::template process<cl_p,cr_p>( container_right_trait_type::template get<cr_p>( right ) ) );
           container_left_trait_type::template set<ml_p>( left, reformat_type::template process<ml_p,mr_p>( container_right_trait_type::template get<mr_p>( right ) ) );
           container_left_trait_type::template set<yl_p>( left, reformat_type::template process<yl_p,yr_p>( container_right_trait_type::template get<yr_p>( right ) ) );
          }
        };
   }
 }

#endif