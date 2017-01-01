#ifndef color_generic_operation_combine
#define color_generic_operation_combine

// ::color::operation::combine( result, a0, c0, a1, c1 )
// ::color::operation::combine( result, a0, c0, a1, c1, a2, c2 )


#include "../../generic/trait/scalar.hpp"
#include "../../generic/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template
         <
           typename category_name
         >
        struct combine
         {
          public:
            typedef category_name  category_type;

            typedef typename ::color::trait::scalar< category_type >::instance_type    scalar_type;
            typedef typename ::color::trait::index<category_type>::instance_type       index_type;

            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef typename ::color::trait::component< category_name >::instance_type component_type;

            typedef ::color::model<category_type>         model_type;

            static model_type & process
             (
                model_type       & result
               ,scalar_type const& a0
               ,model_type  const& c0
               ,scalar_type const& a1
               ,model_type  const& c1
              )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_type( a0 * c0.get(index) + a1 * c1.get(index ) ) );
               }
              return result;
             }

            static model_type & process
             (
                model_type       & result
               ,scalar_type const& a0
               ,model_type  const& c0
               ,scalar_type const& a1
               ,model_type  const& c1
               ,scalar_type const& a2
               ,model_type  const& c2
              )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_type( a0 * c0.get(index) + a1 * c1.get(index)  + a2 * c2.get(index) ) );
               }
              return result;
             }

         };

      }


     template< typename category_name >
      ::color::model<category_name> &
      combine
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::input_const_type                   a0
        ,::color::model<category_name> const& c0
        ,typename ::color::trait::scalar<category_name>::input_const_type                   a1
        ,::color::model<category_name> const& c1
       )
       {
        return ::color::operation::_internal::combine<category_name>::process( result, a0, c0, a1, c1 );
       }

     template< typename category_name >
      ::color::model<category_name> &
      combine
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::input_const_type a0
        ,::color::model<category_name> const& c0
        ,typename ::color::trait::scalar<category_name>::input_const_type a1
        ,::color::model<category_name> const& c1
        ,typename ::color::trait::scalar<category_name>::input_const_type a2
        ,::color::model<category_name> const& c2
       )
       {
        return ::color::operation::_internal::combine<category_name>::process( result, a0, c0, a1, c1, a2, c2 );
       }

    }
  }

#endif
