#ifndef color_generic_operation_combine
#define color_generic_operation_combine

// ::color::operation::combine( result, alpha, upper )
// ::color::operation::combine<alpha_index>( result, upper )


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

            typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

            typedef ::color::model<category_type>         model_type;

            static void process
             (
                model_type       & result
               ,scalar_type const& a0
               ,model_type  const& c0
               ,scalar_type const& a1
               ,model_type  const& c1
              )
             {
              // TODO
             }

            static void process
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
              // TODO
             }

         };

      }


     template< typename category_name >
      void combine
       (
         ::color::model<category_name>      & result
        ,typename ::color::::trait::scalar<category_name>::instance_type const& a0
        ,::color::model<category_name> const& c0
        ,typename ::color::::trait::scalar<category_name>::instance_type const& a1
        ,::color::model<category_name> const& c1
       )
       {
        ::color::operation::_internal::combine<category_name>::process( result, a0, c0, a1, c1 );
       }

     template< typename category_name >
      void combine
       (
         ::color::model<category_name>      & result
        ,typename ::color::::trait::scalar<category_name>::instance_type const& a0
        ,::color::model<category_name> const& c0
        ,typename ::color::::trait::scalar<category_name>::instance_type const& a1
        ,::color::model<category_name> const& c1
        ,typename ::color::::trait::scalar<category_name>::instance_type const& a2
        ,::color::model<category_name> const& c2
       )
       {
        ::color::operation::_internal::combine<category_name>::process( result, a0, c0, a1, c1, a2, c2 );
       }

    }
  }

#endif
