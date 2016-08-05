#ifndef color_YDbDr_convert_rgb
#define color_YDbDr_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/trait/container.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename YDbDr_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::YDbDr<   YDbDr_tag_name >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::YDbDr<   YDbDr_tag_name > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::YDbDr< category_left_type >  YDbDr_const_type;

           enum
            {
              red_p   = ::color::place::_internal::red<category_right_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
            };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {

           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type Y  =  0.298839 * r + 0.586811 * g + 0.114350 * b;        //!< TODO
           scalar_type Db = -0.450    * r - 0.883    * g + 1.333    * b + 0.5;; //!< TODO
           scalar_type Dr = -1.333    * r + 1.116    * g + 0.217    * b + 0.5;; //!< TODO

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( Y  ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( Db ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( Dr ) );
          }
      };

   }
 }

#endif
