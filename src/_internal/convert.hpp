#ifndef color_internal_convert_eebe72e3_2da8_4199_b3cc_e5ee4518b7d5
#define color_internal_convert_eebe72e3_2da8_4199_b3cc_e5ee4518b7d5

#include "./trait.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_left_name, typename category_right_name> 
     struct convert
      {
       public:

         typedef ::color::_internal::trait<category_left_name>    left_trait_type;
         typedef ::color::_internal::trait<category_right_name>   right_trait_type;

         static void process
          (
            typename left_trait_type::container_input_type         left
           ,typename right_trait_type::container_const_input_type  right
          )
          {

          }
       };

    template< typename category_name> 
     struct convert< category_name,category_name >
      {
       public:

         typedef ::color::_internal::trait<category_name>    left_trait_type;
         typedef ::color::_internal::trait<category_name>   right_trait_type;

         static void process
          (
            typename left_trait_type::container_input_type         left
           ,typename right_trait_type:: container_const_input_type right
          )
          {
           left = right;
          }
       };


   }
 }

#endif
