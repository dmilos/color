#ifndef color_operation_normalize
#define color_operation_normalize

// ::color::operation::normalize<category_name>

#include "../../generic/model.hpp"
#include "../../_internal/normalize.hpp"
#include "../trait/index.hpp"
#include "../trait/scalar.hpp"


namespace color
 {
  namespace operation
   {

    /***
     * \desc Fit value between 0 and 1
     */
    template< typename category_name >
     inline
     typename ::color::trait::scalar< category_name >::instance_type
     normalize
      (
       ::color::model<category_name>                     const& m
       ,typename ::color::trait::index<category_name>::input_const_type index
      )
      {
       return ::color::_internal::normalize<category_name>::process( m.get( index ), index ) ;
      }
      
    template
     <
       unsigned index_size
      ,typename category_name 
     >
     inline
     typename ::color::trait::scalar< category_name >::instance_type
     normalize
      (
       ::color::model<category_name>                     const& m
      )
     {
      return  ::color::_internal::normalize<category_name>::template process<index_size>( m.template get<index_size>() );
     }

   }
 }

#endif
