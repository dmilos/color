#ifndef color_cmy_convert_cmy
#define color_cmy_convert_cmy

#include "../place/place.hpp"

#include "../../_internal/convert.hpp"


#include "../category.hpp"
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

         typedef double scalar_type;
         //typedef typename ::color::trait::scalar<category_left_type>::instance_type   left_scalar_type;
         //typedef typename ::color::trait::scalar<category_right_type>::instance_type  right_scalar_type;
         //typedef typename std::max<left_scalar_type,right_scalar_type>::instance_type  right_scalar_type; scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

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
           container_left_trait_type::template set<cr_p>( left, reformat_type::template process<cr_p,cl_p>( container_right_trait_type::template get<cl_p>( right ) ) );
           container_left_trait_type::template set<mr_p>( left, reformat_type::template process<mr_p,ml_p>( container_right_trait_type::template get<ml_p>( right ) ) );
           container_left_trait_type::template set<yr_p>( left, reformat_type::template process<yr_p,yl_p>( container_right_trait_type::template get<yl_p>( right ) ) );
          }
        };
   }
 }

#endif