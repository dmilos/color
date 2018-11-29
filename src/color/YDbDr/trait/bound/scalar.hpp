#ifndef color__internal_YDbDr_bound_scalar
#define color__internal_YDbDr_bound_scalar

// ::color::_internal::v::bound::scalar< index_type, scalar_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"



namespace color
 {
  namespace _internal
   {
    namespace YDbDr
     {
      namespace bound
       {

        template< typename index_name, typename scalar_name >
         struct scalar
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static const instance_type max_list[] = { 1, scalar_type(1.333), scalar_type(1.333) };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static const instance_type max_list[] = { 1, scalar_type(1.333), scalar_type(1.333) };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static const instance_type min_list[] = { 0, scalar_type(-1.333), scalar_type(-1.333) };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static const instance_type min_list[] = { 0, scalar_type(-1.333), scalar_type(-1.333) };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static const instance_type range_list[] = { 1, scalar_type(2.666), scalar_type(2.666) };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static const instance_type range_list[] = { 1, scalar_type(2.666), scalar_type(2.666) };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif
