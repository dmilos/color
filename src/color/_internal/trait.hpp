#ifndef color__internal_trait_
#define color__internal_trait_

#include <cstdint>

#include "./index.hpp"
#include "./component.hpp"
#include "./container.hpp"
#include "./bound.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct trait
      : public  ::color::_internal::index< category_name >
      , public  ::color::_internal::container< category_name >
      , public  ::color::_internal::component< category_name >
      , public  ::color::_internal::bound< category_name >
      {
       public:
         typedef ::color::_internal::index< category_name >      index_trait_type;
         typedef ::color::_internal::component< category_name >  component_trait_type;
         typedef ::color::_internal::container< category_name >  container_trait_type;
         typedef ::color::_internal::bound< category_name >      bound_trait_type;

         // Shortcuts.
         typedef typename index_trait_type::instance_type           index_type;
       // TODO  typedef typename index_trait_type::const_type       index_const_type;
         typedef typename index_trait_type::return_image_type       index_return_image_type;
         typedef typename index_trait_type::input_const_type        index_input_const_type;
         typedef typename index_trait_type::input_type              index_input_type;

         typedef typename component_trait_type::instance_type       component_type;
         typedef typename component_trait_type::const_type          component_const_type;
         typedef typename component_trait_type::return_const_type   component_return_const_type;
         typedef typename component_trait_type::return_type         component_return_type;
         typedef typename component_trait_type::input_const_type    component_input_const_type;
         typedef typename component_trait_type::input_type          component_input_type;

         typedef typename container_trait_type::instance_type       container_type;
         typedef typename container_trait_type::const_type          container_const_type;
         typedef typename container_trait_type::return_const_type   container_return_const_type;
         typedef typename container_trait_type::return_type         container_return_type;
         typedef typename container_trait_type::input_const_type    container_input_const_type;
         typedef typename container_trait_type::input_type          container_input_type;

         typedef typename container_trait_type::set_return_type     set_return_type;

         using bound_trait_type::minimum;
         using bound_trait_type::maximum;
         using bound_trait_type::range;
      };

   }
 }

#endif
