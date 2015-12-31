#ifndef color_generic_operation_addition_123
#define color_generic_operation_addition_123

#include "../../_internal/trait.hpp"
#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name>
        struct addition
         {
          public:
            typedef category_name  category_type;

            typedef ::color::_internal::container< category_type >   container_trait_type;
            typedef ::color::_internal::index< category_type >       index_trait_type;
            typedef ::color::_internal::model<category_type>         model_type;

            typedef typename index_trait_type::instance_type        index_type;

            static void process( model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, result.get( index ) +  right.get( index ) );
               }
             }

            static void process(  model_type &result, model_type const& left, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, left.get( index ) +  right.get( index ) );
               }
             }
         };

      }

     template< typename category_name >
      void addition
       (
         ::color::_internal::model<category_name>      & result
        ,::color::_internal::model<category_name> const& right
       )
       {
        color::operation::_internal::addition<category_name>::process( result, right );
       }

     template< typename category_name >
      void addition
       (
         ::color::_internal::model<category_name>      & result
        ,::color::_internal::model<category_name> const& left
        ,::color::_internal::model<category_name> const& right
       )
       {
        ::color::operation::_internal::addition<category_name>::process( result, left, right );
       }

    }
  }

#endif
