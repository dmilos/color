#ifndef color_operation_normalize
#define color_operation_normalize

// ::color::operation::normalize<category_name>( model, index )
// ::color::operation::normalize<index_size,category_name>( model )

#include "../model.hpp"
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
    //template< typename category_name >
    // inline
    // typename::color::trait::scalar<category_name>::instance_type
    // normalize
    //  (
    //    typename ::color::trait::component< category_name >::component_return_type           const& component
    //   ,typename ::color::trait::index<category_name>::index_input_const_type                       index
    //  )
    //  {
    //   return ::color::_internal::normalize< category_name >::process( component, index );
    //  }

    //template
    // <
    //   typename category_name
    //  ,typename ::color::trait::index< category_name >::index_instance_type index
    // >
    // inline
    // typename ::color::trait::scalar<category_name>::instance_type
    // normalize( typename  ::color::trait::component< category_name >::component_return_type  const& component )
    //  {
    //   return ::color::_internal::normalize< category_name >::template process< index > ( component );
    //  }

    template< typename category_name >
     inline
     typename ::color::trait::scalar< category_name >::instance_type
     normalize
      (
       ::color::model<category_name>                     const& m
       ,typename ::color::trait::index<category_name>::model_type index
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
