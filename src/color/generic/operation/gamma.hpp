#ifndef  color_generic_operation_gamma
#define color_generic_operation_gamma

// ::color::operation::_internal::gamma<category_name>::process( )
// ::color::operation::_internal::gamma<category_name>::process( )


#include "./diverse.hpp"
#include "./normalize.hpp"


#include "../model.hpp"





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

            typedef ::color::trait::index< category_name >      index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef ::color::trait::scalar< category_name >     scalar_trait_type;

            typedef typename index_trait_type::instance_type     index_type;
            typedef typename scalar_trait_type::instance_type    scalar_type;
            typedef typename scalar_trait_type::model_type  scalar_const_input_type;


            typedef ::color::model<category_type>     model_type;
            typedef model_type &                      model_output_type;
            typedef model_type const&                 model_const_input_type;

            typedef ::color::_internal::diverse< category_type >   diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::operation::_internal::gamma< category_name > this_type;

            // TODO operator()

            static model_type & process( model_output_type result, scalar_const_input_type scalar )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, diverse_type::process( this_type::process( normalize_type::process( result.get( index ), index ), scalar ), index ) );
               }
              return result;
             }

            static model_type & process(  model_output_type result, model_const_input_type left, scalar_const_input_type value )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, diverse_type::process( this_type::process( normalize_type::process( left.get( index ), index ), value ), index ) );
               }
              return result;
             }

            static scalar_type process( scalar_const_input_type x, scalar_const_input_type value  )
             {
              return std::pow( x, scalar_type(1)/value );
             }


         };
      }


     template< typename category_name >
      ::color::model<category_name>      &
       gamma
       (
                  ::color::model<category_name>                                  & result
        ,typename ::color::trait::scalar<category_name>::instance_type      const& value
       )
       {
        return ::color::operation::_internal::gamma<category_name>::process( result, value );
       }

     template< typename category_name >
      ::color::model<category_name>      &
       gamma
       (
                  ::color::model<category_name>                                  & result
        ,         ::color::model<category_name>                             const& right
        ,typename ::color::trait::scalar<category_name>::instance_type      const& value
       )
       {
        return ::color::operation::_internal::gamma<category_name>::process( result, right, value );
       }

    }
  }

#endif
