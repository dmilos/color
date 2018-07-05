#ifndef color__internal_luv_bound_natural
#define color__internal_luv_bound_natural

// ::color::_internal::luv::bound::natural< index_type, scalar_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"


#include "../../constant.hpp"


namespace color
 {
  namespace _internal
   {
    namespace luv
     {
      namespace bound
       {

        template< typename scalar_name, typename index_name >
         struct natural
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name    index_type;

             typedef ::color::_internal::constant::luv< scalar_type >             constant_type;
             typedef ::color::_internal::utility::type::traitC< scalar_type >        trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { constant_type::l_max(), constant_type::u_max(), constant_type::v_max() };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { constant_type::l_max(), constant_type::u_max(), constant_type::v_max() };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { constant_type::l_min(), constant_type::u_min(), constant_type::v_min() };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { constant_type::l_min(), constant_type::u_min(), constant_type::v_min() };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { constant_type::l_max() - constant_type::l_min(), constant_type::u_max() - constant_type::u_min(), constant_type::v_max() - constant_type::v_min() };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { constant_type::l_max() - constant_type::l_min(), constant_type::u_max() - constant_type::u_min(), constant_type::v_max() - constant_type::v_min() };
                return range_list[index];
              }
          };


       }
     }
   }
 }

#endif
