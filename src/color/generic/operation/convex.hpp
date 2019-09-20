#ifndef  color_generic_operation_convex_123
#define color_generic_operation_convex_123

// result = ::color::operation::convex( result, a0, x0, x1 );




#include "../trait/scalar.hpp"

#include "../model.hpp"
#include "./combine.hpp"



 namespace color
  {
   namespace operation
    {

     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type        a0
        ,::color::model<category_name>                              const& x0
        ,::color::model<category_name>                              const& x1
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::_internal::combine<category_name>::process( result, a0, x0, scalar_type(1)- a0 , x1 );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type        a0
        ,::color::model<category_name>                              const& x0
        ,typename ::color::trait::scalar<category_name>::model_type        a1
        ,::color::model<category_name>                              const& x1
        ,::color::model<category_name>                              const& x2
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::_internal::combine<category_name>::process( result, a0, x0, a1 , x1, scalar_type(1)-a0-a1, x2 );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type const& a0
        ,::color::model<category_name>                              const& x0
        ,typename ::color::trait::scalar<category_name>::model_type const& a1
        ,::color::model<category_name>                              const& x1
        ,typename ::color::trait::scalar<category_name>::model_type const& a2
        ,::color::model<category_name>                              const& x2
        ,::color::model<category_name>                              const& x3
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::_internal::combine<category_name>::process( result, a0,x0, a1,x1, a2,x2, scalar_type(1)-a0-a1-a2, x3 );
       }


     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type const& a0
        ,::color::model<category_name>                              const& x0
        ,typename ::color::trait::scalar<category_name>::model_type const& a1
        ,::color::model<category_name>                              const& x1
        ,typename ::color::trait::scalar<category_name>::model_type const& a2
        ,::color::model<category_name>                              const& x2
        ,typename ::color::trait::scalar<category_name>::model_type const& a3
        ,::color::model<category_name>                              const& x3
        ,::color::model<category_name>                              const& x4
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::_internal::combine<category_name>::process( result, a0,x0, a1,x1, a2,x2, a3,x3, scalar_type(1)-a0-a1-a2-a3, x4 );
       }

    }
  }

#endif
