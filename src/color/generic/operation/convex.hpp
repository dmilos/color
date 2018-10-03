#ifndef  color_generic_operation_convex_123
#define color_generic_operation_convex_123

#include "../../generic/model.hpp"
#include "../../generic/trait/scalar.hpp"












 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct convex
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>             index_trait_type;
            typedef ::color::trait::component< category_type >       component_trait_type;
            typedef ::color::trait::container< category_type >       container_trait_type;
            typedef ::color::trait::scalar<category_type>            scalar_trait_type;

            typedef typename component_trait_type::instance_type   component_instance_type;
            typedef typename scalar_trait_type::instance_type    scalar_type;
            typedef typename scalar_trait_type::instance_type scalar_const_input_type;


            typedef ::color::model<category_type>     model_type;

            typedef model_type &       model_output_type;
            typedef model_type const&  model_const_input_type;

            typedef typename index_trait_type::instance_type  index_type;

            static model_type & process( model_output_type result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_instance_type( scalar * result.get( index ) +( scalar_type( 1 ) - scalar ) *right.get( index ) ) );
               }
              return result;
             }

            static model_type & process(  model_output_type  result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component_instance_type( scalar * left.get( index ) +( scalar_type( 1 ) - scalar ) *right.get( index ) ) );
               }
              return result;
             }

         };
      }


     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,typename ::color::trait::scalar<category_name>::model_type                      scalar
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::convex<category_name>::process( result, scalar, right );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      convex
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,typename ::color::trait::scalar<category_name>::model_type                      scalar
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::convex<category_name>::process( result, left, scalar, right );
       }

    }
  }

#endif
