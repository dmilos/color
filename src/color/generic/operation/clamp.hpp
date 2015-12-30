#ifndef  color_generic_operation_clamp_123
#define  color_generic_operation_clamp_123

                
#include "../../_internal/bound.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct clamp
         {
          public:
            typedef category_name  category_type;

            typedef ::color::_internal::bound< category_type >   bound_type;
            typedef ::color::_internal::container< category_type >   container_trait_type;

            typedef typename ::color::_internal::model<category_type>  model_type;

            typedef ::color::_internal::component<category_type>  component_trait_type;
            typedef typename component_trait_type::instance_type  component_type;

            typedef ::color::_internal::index<category_type>  index_trait_type;
            typedef typename index_trait_type::instance_type  index_type;

            static void accumulate( model_type &result )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( result.get() <  bound_type::minimum( index ) )
                 {
                  result.set( index, bound_type::minimum( index ) );
                  continue;
                 }
                if(  bound_type::maximum( index ) < result.get())
                 {
                  result.set( index, bound_type::maximum( index ) );
                  continue;
                 }
               }
             }

            static void full(  model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( right.get() <  bound_type::minimum( index ) )
                 {
                  result.set( index, bound_type::minimum( index ) );
                  continue;
                 }
                if(  bound_type::maximum( index ) < right.get() )
                 {
                  result.set( index, bound_type::maximum( index ) );
                  continue;
                 }
                result.set( index, right.get() );
               }
             }

         };
      }

     namespace clamp
      {

       template< typename category_name >
        void accumulate
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::clamp<category_name>::accumulate( result, right );
         }

       template< typename category_name >
        void full
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& left
          ,::color::_internal::model<category_name> const& right
         )
         {
          ::color::operation::_internal::clamp<category_name>::full( result, left, right );
         }

      }
    }
  }

#endif
