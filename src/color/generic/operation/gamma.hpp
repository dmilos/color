#ifndef  color_generic_operation_gamma
#define color_generic_operation_gamma

#include "../../generic/model.hpp"

#include "./diverse.hpp"
#include "./normalize.hpp"

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

            typedef ::color::trait::container< category_name >   container_trait_type;

            typedef typename ::color::trait::index<category_type>::instance_type     index_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;

            typedef typename ::color::model<category_type>  model_type;

            typedef ::color::_internal::diverse< category_type >    diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            static model_type & process( model_type &result, scalar_type const& g )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                scalar_type s = normalize_type::process( result[index], index );
                result.set( index, diverse_type::process( std::pow( s, g ), index ) );
               }
              return result;
             }

            static model_type & process(  model_type & result, model_type const& right, scalar_type const& g )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                scalar_type s = normalize_type::process( right[index], index );
                result.set( index, diverse_type::process( std::pow( s, g ), index ) );
               }
              return result;
             }

         };
      }


     template< typename category_name >
      void gamma
       (
                  ::color::model<category_name>                                  & result
        ,typename ::color::trait::scalar<category_name>::instance_type      const& g
       )
       {
        /*return */::color::operation::_internal::gamma<category_name>::process( result, g );
       }

     template< typename category_name >
      void gamma
       (
                  ::color::model<category_name>                                  & result
        ,         ::color::model<category_name>                             const& right
        ,typename ::color::trait::scalar<category_name>::instance_type      const& g
       )
       {
        /*return */ ::color::operation::_internal::gamma<category_name>::process( result, right, g );
       }

    }
  }

#endif
