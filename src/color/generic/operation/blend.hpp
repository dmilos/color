#ifndef color_generic_operation_blend
#define color_generic_operation_blend

#include "../../_internal/model.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template
         <
           typename category_name
          ,typename float_name
         >
        struct blend
         {
          public:
            typedef category_name  category_type;
            typedef float_name     float_type;

            typedef ::color::_internal::container< category_type >   container_trait_type;
            typedef ::color::_internal::index< category_type >       index_trait_type;
            typedef ::color::_internal::model<category_type>         model_type;

            typedef typename index_trait_type::instance_type        index_type;

            typedef ::color::_internal::normalize< category_type, float_type > normalize_type;
            typedef ::color::_internal::diverse< category_type, float_type >   diverse_type; 

             static void accumulate( model_type &result, float_type const& alpha, model_type const& upper )
              {
               for( index_type index = 0; index < container_trait_type::size(); index ++ )
                {
                 result.set( index, ( float_type(1) - alpha ) * result.get( index ) + alpha * upper.get( index ) );
                }
              }

           template< index_type alpha_index >
             static void accumulate( model_type &result, model_type const& upper )
              {
               float_type aA = normalize_type::template process<alpha_index>( result.template get<alpha_index>( upper  ) );
               float_type aB = normalize_type::template process<alpha_index>( result.template get<alpha_index>( result ) );

               float_type divisor = aA + aB*( float_type(1) - aA );

               float_type cA = aA/divisor;
               float_type cB = aB * ( float_type(1) - aA ) / divisor;

               for( index_type index = 0; index < container_trait_type::size(); index ++ )
                {
                 result.set( index, cB * result.get( index ) + cA * upper.get( index ) );
                }

               result.set<alpha_index>( diverse_type::template process<alpha_index>( divisor ) );
              }

         };

      }

     namespace blend
      {

       template< unsigned alpha_index, typename category_name, typename float_name = double >
        void accumulate
         (
           ::color::_internal::model<category_name>      & result
          ,::color::_internal::model<category_name> const& upper
         )
         {
          color::operation::_internal::blend<category_name,float_name>::template accumulate< alpha_index >( result, upper );
         }

       template< typename category_name, typename float_name = double >
        void accumulate
         (
           ::color::_internal::model<category_name>      & result
          ,float_name                               const& alpha
          ,::color::_internal::model<category_name> const& upper
         )
         {
          color::operation::_internal::blend<category_name,float_name>::accumulate( result, alpha, upper );
         }

      }
    }
  }

#endif
