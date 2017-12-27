#ifndef  color_generic_operation_scale_123
#define color_generic_operation_scale_123
// ::color::operation::scale( )
// ::color::operation::scale( )

#include "../../generic/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {
       template< typename category_name >
        struct scale
         {
          public:
            typedef category_name  category_type;
            typedef typename ::color::trait::scalar<category_name>::input_const_type  scalar_const_input_type;

            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef ::color::trait::index<category_type>         index_trait_type;

			typedef ::color::trait::component< category_type >     component_trait_type;
			typedef typename component_trait_type::instance_type   component_instance_type;

            typedef typename ::color::model<category_type>  model_type;

            typedef model_type &       model_input_type;
            typedef model_type const&  model_const_input_type;

            typedef typename index_trait_type::instance_type  index_type;

            static model_type & process( model_input_type  result, scalar_const_input_type const& scalar )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_instance_type( result.get( index ) * scalar ) );
               }
              return result;
             }

            static model_type & process(  model_input_type  result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_instance_type( scalar * right.get( index ) ) );
               }
              return result;
             }

         };
      }

     template< typename category_name >
      ::color::model<category_name>      & scale
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::input_const_type scalar
       )
       {
        return ::color::operation::_internal::scale<category_name>::process( result, scalar );
       }

     template< typename category_name >
      ::color::model<category_name>      & scale
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::input_const_type  scalar
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::scale<category_name>::process( result, scalar, right );
       }

    }
  }

#endif
