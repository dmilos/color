#ifndef color_generic_fix_overburn
#define color_generic_fix_overburn

#include "../trait/bound.hpp"
#include "../trait/container.hpp"
#include "../trait/component.hpp"
#include "../trait/index.hpp"
#include "../../generic/model.hpp"

 namespace color
  {
   namespace fix
    {
     namespace _internal
      {

       template< typename category_name >
        struct overburn
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>  index_trait_type;
            typedef ::color::trait::bound< category_type >       bound_type;
            typedef ::color::trait::component<category_type>     component_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef typename ::color::model<category_type>  model_type;

            typedef typename component_trait_type::instance_type  component_type;

            typedef typename index_trait_type::instance_type  index_type;

            static model_type & process( model_type &result )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( result.get( index ) <  bound_type::minimum( index ) )
                 {
                  result.set( index, bound_type::minimum( index ) );
                  continue;
                 }
                if(  bound_type::maximum( index ) < result.get( index ) )
                 {
                  result.set( index, bound_type::maximum( index ) );
                  continue;
                 }
               }
              return result;
             }

            static model_type & process(  model_type & result, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( right.get( index ) <  bound_type::minimum( index ) )
                 {
                  result.set( index, bound_type::minimum( index ) );
                  continue;
                 }
                if(  bound_type::maximum( index ) < right.get( index ) )
                 {
                  result.set( index, bound_type::maximum( index ) );
                  continue;
                 }
                result.set( index, right.get( index ) );
               }
              return result;
             }

         };

       }


     template< typename category_name >
      ::color::model<category_name> & overburn
       (
         ::color::model<category_name>      & result
       )
       {
        return ::color::fix::_internal::overburn<category_name>::process( result );
       }

     template< typename category_name >
      ::color::model<category_name> & overburn
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        return ::color::fix::_internal::overburn<category_name>::process( result, right );
       }

    }
  }

#endif
