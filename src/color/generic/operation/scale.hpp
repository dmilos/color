#ifndef  color_generic_operation_scale_123
#define color_generic_operation_scale_123

// ::color::operation::scale( )
// ::color::operation::scale( )


#include "../model.hpp"









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

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::component< category_type >     component_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef ::color::trait::scalar< category_name >     scalar_trait_type;

            typedef typename scalar_trait_type::model_type  scalar_const_input_type;

            typedef typename component_trait_type::instance_type   component_instance_type;

            typedef ::color::model<category_type>  model_type;

            typedef model_type &       model_output_type;
            typedef model_type const&  model_const_input_type;

            typedef typename index_trait_type::instance_type  index_type;

            typedef ::color::operation::_internal::scale<category_type> this_type;

          public:
            model_type& operator()( model_output_type result, scalar_const_input_type scalar ) const
             {
              return this_type::accumulate( result, scalar );
             }

            model_type& operator()( model_output_type  result, scalar_const_input_type scalar, model_const_input_type right ) const
             {
              return this_type::procedure( result, scalar, right );
             }

          public:
            static model_type & accumulate( model_output_type  result, scalar_const_input_type const& scalar )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_instance_type( result.get( index ) * scalar ) );
               }
              return result;
             }

            static model_type & procedure( model_output_type result, scalar_const_input_type scalar, model_const_input_type right )
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
      ::color::model<category_name>      &
      scale
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type scalar
       )
       {
        return ::color::operation::_internal::scale<category_name>::accumulate( result, scalar );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      scale
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type  scalar
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::scale<category_name>::procedure( result, scalar, right );
       }

    }
  }

#endif
