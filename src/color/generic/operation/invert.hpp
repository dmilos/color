#ifndef  color_generic_operation_invert_123
#define  color_generic_operation_invert_123

// ::color::operation::invert<category_name>( model<category_name> )

// ::color::operation::_internal::invert<category_name>::component<>( )
// ::color::operation::_internal::invert<category_name>::process( )
// ::color::operation::_internal::invert<category_name>::process( )

#include "../model.hpp"







 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name>
        struct invert
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::component< category_type >   component_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef ::color::trait::bound<category_type>         bound_type;


            typedef ::color::model<category_type>  model_type;

            typedef model_type &       model_output_type;
            typedef model_type const&  model_const_input_type;

            typedef model_type  result_type;
            typedef model_type  left_type, first_argument_type;
            typedef model_type  right_type, second_argument_type;

            typedef typename component_trait_type::model_type component_input_const_type;
            typedef typename component_trait_type::return_type      component_return_type;

            typedef typename index_trait_type::instance_type     index_type;
            typedef typename index_trait_type::model_type  index_input_const_type;

            typedef ::color::operation::_internal::invert<category_type> this_type;


            static component_return_type
            component
             (
               component_input_const_type component
              ,index_input_const_type     index
             )
             {
              return bound_type::range( index ) - component;
             }

            template< index_type index_size >
             static
             component_return_type
             component( component_input_const_type component )
             {
              return bound_type::template range<index_size>() - component;
             }

          public:
            model_type & operator()( model_type & result ) const
             {
              return this_type::accumulate( result );
             }

            model_type & operator()( model_type &result, model_type const& right ) const
             {
              return this_type::process( result, right );
             }

          public:
            static model_type & accumulate( model_type &result )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component( result.get( index ), index ) );
               }
              return result;
             }

            static model_type  function( model_type const& right )
             {
              model_type result;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component( right.get( index ), index ) );
               }
              return result;
             }

            static model_type & process( model_type &result, model_type const& right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, component( right.get( index ), index ) );
               }
              return result;
             }

         };
      }


     template< typename category_name >
      ::color::model<category_name>      &
      invert
       (
         ::color::model<category_name>      & result
       )
       {
        return ::color::operation::_internal::invert<category_name>::accumulate( result );
       }

     //template< typename category_name >
     // ::color::model<category_name>
     // invert
     //  (
     //    ::color::model<category_name>      const& input
     //  )
     //  { // rejected as confusing during the reading of code
     //   ::color::model<category_name>      result;
     //   return ::color::operation::_internal::invert<category_name>::process( result, input );
     //  }

     template< typename category_name >
      ::color::model<category_name>      &
      invert
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::invert<category_name>::process( result, right );
       }


    }
  }

#endif
