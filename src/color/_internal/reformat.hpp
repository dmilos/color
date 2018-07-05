#ifndef color__internal_reformat
#define color__internal_reformat

// ::color::_internal::reformat< >(   )
// ::color::_internal::reformat< >(   )

#include "../generic/trait/component.hpp"
#include "../generic/trait/index.hpp"
#include "./diverse.hpp"
#include "./normalize.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename category_left_name
      ,typename category_right_name
     >
     struct reformat
      {
       public:
         typedef category_left_name   category_left_type;
         typedef category_right_name  category_right_type;

         typedef ::color::_internal::diverse< category_left_type >   diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef typename ::color::trait::component< category_left_name >::return_type          left_component_return_type;
         typedef typename ::color::trait::index< category_left_name >::model_type         left_index_const_input_type;
         typedef typename ::color::trait::index< category_left_name >::instance_type            left_index_instance_type;

         typedef typename ::color::trait::component< category_right_name >::model_type    right_component_const_input_type;
         typedef typename ::color::trait::index< category_right_name >::model_type        right_index_const_input_type;
         typedef typename ::color::trait::index< category_right_name >::instance_type           right_index_instance_type;

         static
         left_component_return_type
         process
          (
            left_index_const_input_type        left_index
           ,right_component_const_input_type   right_component
           ,right_index_const_input_type       right_index
          )
          {
           return diverse_type::process
            (
             normalize_type::process
              (
                right_component
               ,right_index
              )
             , left_index
            );
          }

         template
          <
           left_index_instance_type left_index_size
          >
         static
         left_component_return_type
         process
          (
            right_component_const_input_type   right_component
           ,right_index_const_input_type       right_index
          )
          {
           return diverse_type::template process< left_index_size >
            (
             normalize_type::process
              (
                right_component
               ,right_index
              )
            );
          }

         template
          <
            left_index_instance_type  left_index_size
           ,right_index_instance_type right_index_size
          >
         static
         left_component_return_type
         process
          (
            right_component_const_input_type   right_component
          )
          {
           return diverse_type::template process< left_index_size >
            (
             normalize_type::template process< right_index_size >
              (
                right_component
              )
            );
          }
      };

    template
     <
       typename category_name
     >
     struct reformat< category_name, category_name >
      {
       public:
         typedef category_name   category_type;

         typedef typename ::color::trait::scalar<category_name>::instance_type            scalar_type;

         typedef typename ::color::trait::component< category_type >::return_type          component_return_type;
         typedef typename ::color::trait::index< category_type >::model_type         index_const_input_type;
         typedef typename ::color::trait::index< category_type >::instance_type            index_instance_type;

         typedef typename ::color::trait::component< category_type >::model_type     component_const_input_type;

         static
         component_return_type
         process
          (
            index_const_input_type       left_index
           ,component_const_input_type   right_component
           ,index_const_input_type       right_index
          )
          {
           return right_component;
          }

         template
          <
           index_instance_type left_index_size
          >
         static
         component_return_type
         process
          (
            component_const_input_type   right_component
           ,index_const_input_type       right_index
          )
          {
           return right_component;
          }

         template
          <
            index_instance_type  left_index_size
           ,index_instance_type right_index_size
          >
         static
         component_return_type
         process
          (
            component_const_input_type   right_component
          )
          {
           return right_component;
          }
      };

   }
 }

#endif



