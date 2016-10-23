#ifndef color_xyz_convert_gray
#define color_xyz_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../place/place.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::xyz<   xyz_tag_name >
       ,::color::category::gray< gray_tag_name >
      >
     {
      public:
        typedef ::color::category::xyz<   xyz_tag_name > category_left_type;
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
