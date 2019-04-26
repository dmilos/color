#ifndef color_trait_bound
#define color_trait_bound

// ::color::trait::bound< category >::maximum
// ::color::trait::bound< category >::minimum
// ::color::trait::bound< category >::bound

#include "../../_internal/utility/bound/general.hpp"

#include "./index.hpp"
#include "./component.hpp"


namespace color
 {
  /**
   * @namespace trait
   * Traits of models
   */
  namespace trait
   {
    /**
     * @class bound
     * Bounds or limits.
     * Expected to have:
     * - bound::minimum
     * - bound::maximum
     * - bound::range
     // * - bound::center 
     */
    template< typename category_name >
     struct bound
      : public ::color::_internal::utility::bound::general
       <
         typename ::color::trait::component< category_name >::instance_type
        ,typename ::color::trait::index< category_name >::instance_type
       >
      {
       public:
         typedef category_name category_type;

         typedef ::color::trait::component< category_name >   component_trait_type;
         typedef ::color::trait::index< category_name >           index_trait_type;

         typedef typename component_trait_type::instance_type      component_instance_type;
         typedef typename index_trait_type::instance_type    index_instance_type;

         typedef ::color::_internal::utility::bound::general<component_instance_type, index_instance_type > general_type;

         //typedef ::color::trait::bound< category_name >  this_type;

         using general_type::minimum;
         using general_type::maximum;
         using general_type::range;
       //using general_type::center;
      };

   }
 }

#endif