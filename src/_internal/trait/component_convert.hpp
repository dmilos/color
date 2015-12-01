#ifndef color_internal_trait_component_convert_
#define color_internal_trait_component_convert_

#include "./trait.hpp"

namespace color
 {
  namespace _internal
   {
    namespace trait
     {
      namespace component
       {

        template< typename component_left_trait_name, typename component_right_trait_name>
         struct convert
          {
           public:

             typedef component_left_trait_name    left_trait_type;
             typedef component_right_trait_name   right_trait_type;

             typedef typename component_left_trait_name::input_type;          left_input_type;
             typedef typename component_right_trait_name::const_input_type;   right_const_input_type;

             static void process
              (
                typename left_input_type         left
               ,typename right_const_input_type  right
              )
              { // TODO This is problematic!!!
               left = component_left_trait_name::range() *
                      ( right - component_right_trait_name::minimum() ) / component_right_trait_name::range()
                      + component_right_trait_name::minimum()
              }
           };

        template< typename component_trait_name>
         struct convert< component_trait_name,component_trait_name >
          {
           public:

             typedef component_left_trait_name    left_trait_type;
             typedef component_right_trait_name   right_trait_type;

             typedef typename component_left_trait_name::input_type;          left_input_type;
             typedef typename component_right_trait_name::const_input_type;   right_const_input_type;

             static void process
              (
                typename left_input_type         left
               ,typename right_const_input_type  right
              )
              {
               left = right;
              }
          };

       }
     }
   }
 }

#endif