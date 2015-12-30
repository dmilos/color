#ifndef color_generic_operation_blend
#define color_generic_operation_blend

// color::operation::blend( result, alpha, upper )
// color::operation::blend<alpha_index>( result, upper )


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

            typedef ::color::operation::_internal::blend<category_type,float_type> this_type;

            typedef ::color::_internal::container< category_type >   container_trait_type;
            typedef ::color::_internal::index< category_type >       index_trait_type;
            typedef ::color::_internal::model<category_type>         model_type;

            typedef typename index_trait_type::instance_type        index_type;

            typedef ::color::_internal::normalize< category_type, float_type > normalize_type;
            typedef ::color::_internal::diverse< category_type, float_type >   diverse_type;

            static void accumulate( model_type &result, float_type const& alpha, model_type const& upper )
             {
              this_type::template accumulate( result, result, alpha, upper );
             }

            static void accumulate( model_type &result, model_type const& lower, float_type const& alpha, model_type const& upper )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, ( float_type(1) - alpha ) * lower.get( index ) + alpha * upper.get( index ) );
               }
             }

            template< index_type alpha_index >
             static void accumulate( model_type &result, model_type const& upper )
              {
               this_type::template accumulate<alpha_index>( result, result, upper );
              }

            template< index_type alpha_index >
             static void accumulate( model_type &result, model_type const& lower, model_type const& upper )
              {
               float_type aU = normalize_type::template process<alpha_index>( upper.template get<alpha_index>() );
               float_type aL = normalize_type::template process<alpha_index>( lower.template get<alpha_index>() );

               float_type divisor = aU + aL*( float_type(1) - aU );

               float_type cU = aU/divisor;
               float_type cL = aL * ( float_type(1) - aU ) / divisor;

               for( index_type index = 0; index < container_trait_type::size(); index ++ )
                {
                 result.set( index, cL * lower.get( index ) + cU * upper.get( index ) );
                }

               result.template set<alpha_index>( diverse_type::template process<alpha_index>( divisor ) );
              }

            static model_type mix( model_type const& lower, float_type const& alpha, model_type const& upper )
             {
              model_type result;
              this_type::template accumulate( result, lower, alpha, upper );
              return result;
             }

            template< index_type alpha_index >
             static model_type mix( model_type const& lower, model_type const& upper )
              {
               model_type result;
               this_type::template accumulate<alpha_index>( result, lower, upper );
               return result;
              }
         };

      }

     template< unsigned alpha_index, typename category_name, typename float_name = double >
      void blend
       (
         ::color::_internal::model<category_name>      & result
        ,::color::_internal::model<category_name> const& upper
       )
       {
        color::operation::_internal::blend<category_name,float_name>::template accumulate< alpha_index >( result, upper );
       }

     template< unsigned alpha_index, typename category_name, typename float_name = double >
      void blend
       (
         ::color::_internal::model<category_name>      & result
        ,::color::_internal::model<category_name> const& lower
        ,::color::_internal::model<category_name> const& upper
       )
       {
        color::operation::_internal::blend<category_name,float_name>::template accumulate< alpha_index >( result, lower, upper );
       }
       
     template< unsigned alpha_index, typename category_name, typename float_name = double >
      ::color::_internal::model<category_name>
      mix
       (
         ::color::_internal::model<category_name> const& lower
        ,::color::_internal::model<category_name> const& upper
       )
       {
        return color::operation::_internal::blend<category_name,float_name>::template mix< alpha_index >( lower, upper );
       }
       

     template< typename category_name, typename float_name = double >
      void blend
       (
         ::color::_internal::model<category_name>      & result
        ,float_name                               const& alpha
        ,::color::_internal::model<category_name> const& upper
       )
       {
        color::operation::_internal::blend<category_name,float_name>::accumulate( result, alpha, upper );
       }

     template< typename category_name, typename float_name = double >
      void blend
       (
         ::color::_internal::model<category_name>      & result
        ,::color::_internal::model<category_name> const& lower
        ,float_name                               const& alpha
        ,::color::_internal::model<category_name> const& upper
       )
       {
        color::operation::_internal::blend<category_name,float_name>::accumulate( result, lower, alpha, upper );
       }

     template< typename category_name, typename float_name = double >
      ::color::_internal::model<category_name>
      mix
       (
         ::color::_internal::model<category_name> const& lower
        ,float_name                               const& alpha
        ,::color::_internal::model<category_name> const& upper
       )
       {
        return color::operation::_internal::blend<category_name,float_name>::mix( lower, alpha, upper );
       }


    }
  }

#endif
