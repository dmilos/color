#ifndef  color_generic_operation_scale_123
#define color_generic_operation_scale_123
// ::color::operation::scale( )
// ::color::operation::scale( )

#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {
       template< typename category_name, typename scalar_name >
        struct scale
         {
          public:
            typedef category_name  category_type;
            typedef scalar_name    scalar_type;
            typedef scalar_type  const&  scalar_const_input_type;

            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef ::color::trait::index<category_type>         index_trait_type;

            typedef typename ::color::_internal::model<category_type>  model_type;

            typedef model_type &       model_input_type;
            typedef model_type const&  model_const_input_type;

            typedef typename index_trait_type::instance_type  index_type;

            static void process( model_input_type  result, scalar_const_input_type const& scalar )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, result.get( index ) * scalar );
               }
             }

            static void process(  model_input_type  result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, scalar * right.get( index ) );
               }
             }

         };
      }


     template< typename category_name, typename scalar_name >
      void scale
       (
         ::color::_internal::model<category_name>      & result
        ,scalar_name                            const& scalar
       )
       {
        ::color::operation::_internal::scale<category_name,scalar_name>::process( result, scalar );
       }

     template< typename category_name, typename scalar_name >
      void scale
       (
         ::color::_internal::model<category_name>      & result
        ,scalar_name                            const& scalar
        ,::color::_internal::model<category_name> const& right
       )
       {
        ::color::operation::_internal::scale<category_name,scalar_name>::process( result, scalar, right );
       }

    }
  }

#endif
