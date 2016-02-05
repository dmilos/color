#ifndef color_cmyk_convert_cmyk
#define color_cmyk_convert_cmyk

//#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
       <
         ::color::category::cmyk< tag_left_name >
        ,::color::category::cmyk< tag_right_name>
       >
       {
        public:
          typedef ::color::category::cmyk< tag_left_name > category_left_type;
          typedef ::color::category::cmyk< tag_right_name> category_right_type;

          typedef double scalar_type;

          typedef ::color::trait::container<category_left_type>     container_left_trait_type;
          typedef ::color::trait::container<category_right_type>    container_right_trait_type;

          typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type >    reformat_type;

          typedef typename container_left_trait_type::input_type         container_left_input_type;
          typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

          static void process
           (
             container_left_input_type         left
            ,container_right_const_input_type  right
           )
           {
            // TODO use place
            container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( container_right_trait_type::template get<0>( right ) ) );
            container_left_trait_type::template set<1>( left, reformat_type::template process<1,1>( container_right_trait_type::template get<1>( right ) ) );
            container_left_trait_type::template set<2>( left, reformat_type::template process<2,2>( container_right_trait_type::template get<2>( right ) ) );
            container_left_trait_type::template set<3>( left, reformat_type::template process<3,3>( container_right_trait_type::template get<3>( right ) ) );
           }
        };

   }
 }

#endif