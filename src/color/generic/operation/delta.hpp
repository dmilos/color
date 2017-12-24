#ifndef  color_generic_operation_delta
#define color_generic_operation_delta

// ::color::operation::delta( result, left, right )

#include "../model.hpp"
#include "../trait/scalar.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct delta
         {
          public:
            typedef category_name  category_type;

            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::index< category_type >::instance_type          index_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type        scalar_type;
            typedef typename ::color::trait::component< category_type >::instance_type  component_type;

            typedef ::color::trait::container< category_type >   container_trait_type;

            static model_type& process( model_type &result, model_type const& left, model_type const& right )
             { // Hint: Enable loop unroll, gcc:-funroll-loops
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get( index ) < right.get( index ) )
                 {
                  result.set( index, component_type( right.get( index ) - left.get( index ) ) );
                 }
                else
                 {
                  result.set( index, component_type( left.get( index ) - right.get( index ) ) );
                 }
               }

              return result;
             }

         };

      }

     template< typename category_name >
      ::color::model<category_name> &
      delta
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::delta<category_name>::process( result, left, right );
       }

    }
  }

#endif
