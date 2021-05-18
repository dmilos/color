#ifndef  color_generic_operation_gain
#define  color_generic_operation_gain







#include "../trait/scalar.hpp"

#include "../model.hpp"





 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct gain
         {
          public:
            typedef category_name  category_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;
            typedef ::color::trait::scalar< category_name >      scalar_trait_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;
            typedef typename ::color::trait::scalar<category_type>::model_type  scalar_const_input_type;
            typedef typename index_trait_type::instance_type  index_type;


            typedef ::color::model<category_type>     model_type;
            typedef model_type &                      model_output_type;
            typedef model_type const&                 model_const_input_type;

            typedef ::color::_internal::diverse< category_type >   diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::operation::_internal::bias< category_name > bias_type;

            typedef ::color::operation::_internal::gain< category_name > this_type;

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

            template< index_type index_number >
             static model_type & process(  model_output_type  result, model_const_input_type left, scalar_const_input_type scalar )
              {
               result.template set<index_number>( diverse_type::template process<index_number>( this_type::process( normalize_type::template process<index_number>( left.template get<index_number>() ), scalar ) ) );
               return result;
              }

            static scalar_type process( scalar_const_input_type x, scalar_const_input_type g )
             {
              if( x < scalar_type(0.5) )
               {
                return bias_type::process(scalar_type(2)*x, g )/scalar_type(2);
               }
              else
               {
                return scalar_type(1) - bias_type::process( scalar_type(2) - scalar_type(2)*x, g)/scalar_type(2);
               }
             }

         };
      }


     template< typename category_name >
      ::color::model<category_name>      &
      gain
       (
         ::color::model<category_name>        & result
        ,typename ::color::trait::scalar<category_name>::model_type                     const& scalar
       )
       {
        return ::color::operation::_internal::gain<category_name>::process( result, scalar );
       }

     template< typename category_name >
      ::color::model<category_name>      &
      gain
       (
         ::color::model<category_name>          & result
        ,::color::model<category_name>     const& left
        ,typename ::color::trait::scalar<category_name>::model_type                     const& scalar
       )
       {
        return ::color::operation::_internal::gain<category_name>::process( result, left, scalar );
       }

     /*template
      <
        unsigned index_size
       ,typename category_name
      >
      inline
      ::color::model<category_name>  &
      gain
       (
          ::color::model<category_name>        & result
         ,::color::model<category_name>     const& right
         ,typename ::color::trait::scalar<category_name>::model_type const& scalar
       )
      {
       return ::color::operation::_internal::gain<category_name>::process( result, left, scalar, right );
      }*/


    }
  }

#endif
