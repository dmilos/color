
#include "./component.hpp"
#include "./index.hpp"

namespace color
 {
  namespace _internal
   {

    template
      <
        typename category_name
       ,typename float_name     = double 
      >
     inline
     float_name
     normalize
      (
        typename ::color::_internal::component< category_name >::input_const_type  divergent
       ,typename ::color::_internal::index< category_name >::input_const_type      index
      )
      {
       typedef ::color::_internal::component< category_name >  component_trait_type;

       float_name normal = divergent;

       normal -= component_trait_type::minimum( index );
       normal /= component_trait_type::range( index );
       return normal;
      }

    template
      < 
        typename category_name, 
       ,typename float_name    = double 
       ,typename ::color::_internal::index< category_name >::index_type index_name
      >
     inline
     float_name
     normalize
      (
        typename ::color::_internal::container< category_name >::input_const_type  divergent
      )
      {
       typedef ::color::_internal::component< category_name >  component_trait_type;

       float_name normal = divergent;
       normal -= component_trait_type::template minimum<index_name>( );
       normal /= component_trait_type::template range<index_name>( );

       return normal;
      }
      
   }
 }