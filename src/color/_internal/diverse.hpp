#ifndef color__internal_diverse
#define color__internal_diverse

// ::color::_internal::diverse< >(   )
// ::color::_internal::diverse< >(   )

#include "./component.hpp"
#include "./index.hpp"
//#include "./bound.hpp"

namespace color
 {
  namespace _internal
   {
    // TODO make it struct

    template< typename category_name, typename float_name = double >
     inline
     typename ::color::_internal::component< category_name >::return_type
     diverse
      (
                 float_name                                                    const&  normal
       ,typename ::color::_internal::index< category_name >::input_const_type         index
      )
      {
       typedef ::color::_internal::bound< category_name >  bound_trait_type;
       typedef ::color::_internal::component< category_name >  component_trait_type;

       float_name divergent = normal;

       divergent *= bound_trait_type::range( index );
       divergent += bound_trait_type::minimum( index );
       return  typename component_trait_type::instance_type( divergent );
      }

    template
      <
        typename category_name
       ,unsigned /*typename ::color::_internal::index< category_name >::index_type*/ index_name
       ,typename float_name
      >
     inline
     typename ::color::_internal::component< category_name >::return_type
     diverse
      (
        float_name  const& normal
      )
      {
       typedef ::color::_internal::bound< category_name >  bound_trait_type;
       typedef ::color::_internal::component< category_name >  component_trait_type;

       float_name divergent = normal;
       divergent *= bound_trait_type::template minimum<index_name>( );
       divergent += bound_trait_type::template range<index_name>( );

       return  typename component_trait_type::instance_type( divergent );
      }
      
   }
 }
 
#endif
