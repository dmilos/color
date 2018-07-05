#ifndef color_yiq_convert_gray
#define color_yiq_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../place/place.hpp"

namespace color
 {
  namespace _internal
   {

     template< typename yiq_tag_name, typename gray_tag_name >
      struct convert
       <
         ::color::category::yiq<   yiq_tag_name >
        ,::color::category::gray< gray_tag_name >
       >
      {
       public:
         typedef ::color::category::yiq<   yiq_tag_name > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
                  luma_p  = ::color::place::_internal::luma<category_left_type>::position_enum
           ,   inphase_p  = ::color::place::_internal::inphase<category_left_type>::position_enum
           ,quadrature_p  = ::color::place::_internal::quadrature<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type g = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );

                  auto       y = diverse_type::template process<0>( g );
           static auto const i = diverse_type::template process<1>( 0.5 );
           static auto const q = diverse_type::template process<2>( 0.5 );

           container_left_trait_type::template set<0>( left, y );
           container_left_trait_type::template set<1>( left, i );
           container_left_trait_type::template set<2>( left, q );

           container_left_trait_type::template set<      luma_p>( left, y );
           container_left_trait_type::template set<   inphase_p>( left, i );
           container_left_trait_type::template set<quadrature_p>( left, q );
          }

      };

   }
 }

#endif
