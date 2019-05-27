#ifndef color_operation_diverse
#define color_operation_diverse

#include "../../_internal/diverse.hpp"

#include "../trait/component.hpp"
#include "../trait/scalar.hpp"
#include "../trait/index.hpp"









namespace color
 {
  namespace operation
   {

    template
     <
       typename category_name
     >
     inline
     typename ::color::trait::component< category_name >::component_return_type
     diverse
      (
        typename ::color::trait::scalar<category_name>::instance_type           const& scalar
       ,typename ::color::trait::index<category_name>::index_input_const_type          index
      )
      {
       return ::color::_internal::diverse< category_name >::process( scalar, index );
      }

    template
     <
       typename category_name
      ,typename ::color::trait::index< category_name >::index_instance_type index
     >
     inline
     typename ::color::trait::component< category_name >::component_return_type
     diverse( typename ::color::trait::scalar<category_name>::instance_type   const& scalar )
      {
       return ::color::_internal::diverse< category_name >::template process< index > ( scalar );
      }

   }
 }

#endif
