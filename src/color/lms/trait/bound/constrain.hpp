#ifndef color__internal_lms_bound_constrain
#define color__internal_lms_bound_constrain

// ::color::_internal::lms::bound::scalar< index_type, scalar_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"


#include "../../constant/reference.hpp"


namespace color
 {
  namespace _internal
   {
    namespace lms
     {
      namespace bound
       {

        template< typename number_name, typename index_name, ::color::constant::lms::reference_enum reference_number >
         struct constrain
          {
           public:
             typedef number_name  number_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< number_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { 100, 127, 127 };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 100, 127, 127 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { 0, -127, -127 };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, -127, -127 };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { 100, 255, 255 };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 100, 255, 255 };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif
