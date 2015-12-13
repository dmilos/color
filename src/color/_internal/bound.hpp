#ifndef color_bound
#define color_bound
// color::bound< category >::maximum
// color::bound< category >::minimum
// color::bound< category >::bound

#include "./index.hpp"
#include "./component.hpp"
#include "./utility/bound/general.hpp"



namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct bound
      : public ::color::_internal::utility::bound::general
       <
         typename ::color::_internal::component< category_name >::instance_type
        ,typename ::color::_internal::index< category_name >::instance_type
       >
      {
       public:
         typedef category_name category_type;

         typedef ::color::_internal::component< category_name >   component_trait_type;
         typedef ::color::_internal::index< category_name >  index_trait_type;

         typedef typename component_trait_type::instance_type      component_instance_type;
         typedef typename index_trait_type::instance_type    index_instance_type;
         
         typedef ::color::_internal::utility::bound::general<component_instance_type, index_instance_type > general_type;

         typedef ::color::_internal::bound< category_name >  this_type;
         
         using general_type::minimum;
         using general_type::maximum;
         using general_type::range;
      };
   }
 }

#endif