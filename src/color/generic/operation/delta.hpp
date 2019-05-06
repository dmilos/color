#ifndef  color_generic_operation_delta
#define color_generic_operation_delta

// ::color::operation::delta( result, left, right )

#include "../model.hpp"
#include "../trait/scalar.hpp"










 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct delta
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>             index_trait_type;
            typedef ::color::trait::component< category_type >       component_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef ::color::trait::scalar<category_type>            scalar_trait_type;


            typedef typename index_trait_type::instance_type          index_type;
            typedef typename component_trait_type::instance_type  component_type;
            typedef typename scalar_trait_type::instance_type        scalar_type;

            typedef ::color::model<category_type>  model_type;

            typedef model_type &       model_output_type;
            typedef model_type const&  model_const_input_type;

            typedef model_type  result_type;
            typedef model_type  left_type, first_argument_type;
            typedef model_type  right_type, second_argument_type;

            typedef ::color::operation::_internal::delta<category_type> this_type;
          public:
            model_type& operator()( model_type & result, model_type const& right )const
             {
              return this_type::accumulate( result, right );
             }

            model_type& operator()( model_type & result, model_type const& left, model_type const& right )const
             {
              return this_type::process( result, left, right );
             }

          public:
            static model_type& accumulate( model_output_type result, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( result.get( index ) < right.get( index ) )
                 {
                  result.set( index, component_type( right.get( index ) - result.get( index ) ) );
                 }
                else
                 {
                  result.set( index, component_type( result.get( index ) - right.get( index ) ) );
                 }
               }
              return result;
             }

            static model_type process( model_const_input_type left, model_const_input_type right )
             {
              model_type result;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get( index ) < right.get( index ) )
                 {
                  result.set( index, component_type( right.get( index ) - left.get( index ) ) );
                 }
                else
                 {
                  result.set( index, component_type( left.get( index ) - right.get( index ) ) );
                 }
               }
              return result;
             }

            static model_type& process( model_output_type result, model_const_input_type left, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get( index ) < right.get( index ) )
                 {
                  result.set( index, component_type( right.get( index ) - left.get( index ) ) );
                 }
                else
                 {
                  result.set( index, component_type( left.get( index ) - right.get( index ) ) );
                 }
               }
              return result;
             }
         };

      }

     template< typename category_name >
      ::color::model<category_name> &
      delta
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::delta<category_name>::accumulate( result, right );
       }

     template< typename category_name >
      ::color::model<category_name> &
      delta
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::delta<category_name>::process( result, left, right );
       }

    }
  }

#endif
