#ifndef color_generic_operation_addition_123
#define color_generic_operation_addition_123

// ::color::operation::addition( result, right )
// ::color::operation::addition( result, left, right )


#include "../../generic/model.hpp"









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

            typedef ::color::trait::index< category_type >       index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;


            typedef ::color::model<category_type>         model_type;

            typedef typename index_trait_type::instance_type        index_type;

            typedef ::color::operation::_internal::addition<category_type> this_type;

            model_type operator()( model_type const& left, model_type const& right ) const
             {
              model_type result;
              return this_type::process( result, left, right );
             }

            static model_type & process( model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, result.get( index ) +  right.get( index ) );
               }
              return result;
             }

            static model_type & process(  model_type &result, model_type const& left, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, left.get( index ) +  right.get( index ) );
               }
              return result;
             }
         };

      }

     template< typename category_name >
      ::color::model<category_name> &
      addition
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::addition<category_name>::process( result, right );
       }

     template< typename category_name >
      ::color::model<category_name> &
      addition
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::addition<category_name>::process( result, left, right );
       }

    }
  }

#endif
