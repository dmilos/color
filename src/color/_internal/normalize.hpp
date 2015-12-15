
#include "./component.hpp"
#include "./index.hpp"

namespace color
 {
  namespace _internal
   {

    // TODO make it struct

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
       typedef ::color::_internal::bound< category_name >  bound_trait_type;

       float_name normal = divergent;

       normal -= bound_trait_type::minimum( index );
       normal /= bound_trait_type::range( index );
       return normal;
      }

    template
      < 
        typename category_name
       ,unsigned /* ::color::_internal::index< category_name >::index_type */ index_size
       ,typename float_name    = double 
      >
     inline
     float_name
     normalize
      (
        typename ::color::_internal::component< category_name >::input_const_type  divergent
      )
      {
       typedef ::color::_internal::bound< category_name >  bound_trait_type;

       float_name normal = divergent;
       normal -= bound_trait_type::template minimum<index_size>( );
       normal /= bound_trait_type::template range<index_size>( );

       return normal;
      }
      
   }
 }