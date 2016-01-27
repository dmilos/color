#ifndef color_yiq_convert_gray
#define color_yiq_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

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
         typedef double  scalar_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type g = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( g ) );
           container_left_trait_type::template set<1>( left, bound_left_trait_type::template minimum<1>() );
           container_left_trait_type::template set<2>( left, bound_left_trait_type::template minimum<2>() );
          }

      };

   }
 }

#endif
