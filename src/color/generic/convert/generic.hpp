#ifndef color_$[![Left]!]_convert_$[![Right]!]
#define color_$[![Left]!]_convert_$[![Right]!]

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../$[![Right]!]/$[![Right]!].hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename $[![Left]!]_tag_name, typename $[![Right]!]_tag_name >
     struct convert
      <
        ::color::category::$[![Left]!]< $[![Left]!]_tag_name >
       ,::color::category::$[![Right]!]<  $[![Right]!]_tag_name >
      >
      {
       public:
         typedef ::color::category::$[![Left]!]< $[![Left]!]_tag_name >       $[![Left]!]_category_type, category_left_type;
         typedef ::color::category::$[![Right]!]< $[![Right]!]_tag_name >    $[![Right]!]_category_type, category_right_type;

         typedef typename ::color::trait::scalar< $[![Left]!]_category_type >::instance_type  scalar_type;

         typedef ::color::model< $[![Left]!]_category_type > $[![Left]!]_model_type;
         typedef ::color::model< $[![Right]!]_category_type >  $[![Right]!]_model_type;

         typedef ::color::rgb< scalar_type >  rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = $[![Left]!]_model_type( rgb_model_type( $[![Right]!]_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
