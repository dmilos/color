#ifndef  color_generic_operation_gamma
#define color_generic_operation_gamma

#include "../../generic/model.hpp"

// ::color::operation::gamma<category_name>( model<category_name> )

// ::color::operation::_internal::gamma<category_name>::component<>( )
// ::color::operation::_internal::gamma<category_name>::process( )
// ::color::operation::_internal::gamma<category_name>::process( )

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name>
        struct gamma
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::bound<category_type>         bound_type;
            typedef ::color::trait::component< category_name >   component_trait_type;
            typedef ::color::trait::container< category_name >   container_trait_type;

            typedef typename ::color::model<category_type>  model_type;


            typedef typename component_trait_type::input_const_type component_input_const_type;
            typedef typename component_trait_type::return_type      component_return_type;

            typedef typename index_trait_type::instance_type     index_type;
            typedef typename index_trait_type::input_const_type  index_input_const_type;

            static void process( model_type &result )
             {
              TODO;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                //result.set( index, component( result.get( index ), index ) );
               }
             }

            static void process(  model_type &result, model_type const& right )
             {
              TODO;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                //result.set( index, component( right.get( index ), index ) );
               }
             }

         };
      }


     template< typename category_name >
      void gamma
       (
         ::color::model<category_name>      & result
       )
       {
        ::color::operation::_internal::gamma<category_name>::process( result );
       }

     template< typename category_name >
      void gamma
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        ::color::operation::_internal::gamma<category_name>::process( result, right );
       }

    }
  }

#endif
