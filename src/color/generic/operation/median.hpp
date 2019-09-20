#ifndef  color_generic_operation_median
#define color_generic_operation_median

// r = ::color::operation::median( r, scalar, r );
// result = ::color::operation::median( result, left, scalar, right );




#include "../trait/scalar.hpp"

#include "../model.hpp"
#include "./combine.hpp"




 namespace color
  {
   namespace operation
    {

     template< typename category_name >
      ::color::model<category_name>      &
      median
       (
         ::color::model<category_name>                                    & result
        ,typename ::color::trait::scalar<category_name>::model_type         scalar
        ,::color::model<category_name>                               const& right
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::combine<category_name>( result, scalar_type(1) - scalar, result, scalar, right );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      median
       (
         ::color::model<category_name>                                     & result
        ,::color::model<category_name>                                const& left
        ,typename ::color::trait::scalar<category_name>::model_type          scalar
        ,::color::model<category_name>                                const& right
       )
       {
        typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
        return ::color::operation::combine<category_name>( result, scalar_type(1) - scalar, left, scalar, right );
       }

    }
  }

#endif
