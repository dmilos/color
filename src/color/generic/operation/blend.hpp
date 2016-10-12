#ifndef color_generic_operation_blend
#define color_generic_operation_blend

// ::color::operation::blend( result, alpha, upper )
// ::color::operation::blend<alpha_index>( result, upper )


#include "../../generic/trait/index.hpp"
#include "../../generic/trait/container.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/model.hpp"
#include "../../generic/get/alpha.hpp"
#include "../../generic/set/alpha.hpp"

#include "../../generic/place/alpha.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template
         <
           typename category_name
         >
        struct blend
         {
          public:
            typedef category_name  category_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;
            typedef typename ::color::trait::scalar<category_type>::input_const_type  scalar_const_input_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef typename index_trait_type::instance_type     index_type;

            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef ::color::model<category_type>     model_type;

            typedef ::color::_internal::diverse< category_type >   diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;


            typedef ::color::operation::_internal::blend<category_type> this_type;

            static void accumulate( model_type &result, scalar_type const& alpha, model_type const& upper )
             {
              this_type::template accumulate( result, result, alpha, upper );
             }

            static void accumulate( model_type &result, model_type const& lower, scalar_type const& alpha, model_type const& upper )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, ( scalar_type(1) - alpha ) * lower.get( index ) + alpha * upper.get( index ) );
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
               scalar_type aU = normalize_type::template process<alpha_index>( ::color::get::alpha( upper ) );
               scalar_type aL = normalize_type::template process<alpha_index>( ::color::get::alpha( lower ) );

               scalar_type divisor = aU + aL*( scalar_type(1) - aU );

               scalar_type cU = aU/divisor;
               scalar_type cL = aL * ( scalar_type(1) - aU ) / divisor;

               for( index_type index = 0; index < container_trait_type::size(); index ++ )
                {
                 result.set( index, cL * lower.get( index ) + cU * upper.get( index ) );
                }

               ::color::set::alpha( result, diverse_type::template process<alpha_index>( divisor ) );
              }

            static model_type mix( model_type const& lower, scalar_type const& alpha, model_type const& upper )
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

     template< typename category_name >
      void blend
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& upper
       )
       {
        enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
        static_assert( 0 <= alpha_index, "Error: This combination of model/format has no alpha channel" ) ;

        ::color::operation::_internal::blend<category_name>::template accumulate< alpha_index >( result, upper );
       }

     template< typename category_name >
      void blend
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& lower
        ,::color::model<category_name> const& upper
       )
       {
        enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
        static_assert( 0 <= alpha_index, "Error: This combination of model/format has no alpha channel" ) ;

        ::color::operation::_internal::blend<category_name>::template accumulate< alpha_index >( result, lower, upper );
       }

     template< typename category_name >
      ::color::model<category_name>
      mix
       (
         ::color::model<category_name> const& lower
        ,::color::model<category_name> const& upper
       )
       {
        enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
        static_assert( 0 <= alpha_index, "Error: This combination of model/format has no alpha channel" ) ;

        return ::color::operation::_internal::blend<category_name>::template mix< alpha_index >( lower, upper );
       }


     template< typename category_name, typename scalar_name = double >
      void blend
       (
         ::color::model<category_name>      & result
        ,scalar_name                   const& alpha
        ,::color::model<category_name> const& upper
       )
       {
        ::color::operation::_internal::blend<category_name>::accumulate( result, alpha, upper );
       }

     template< typename category_name, typename scalar_name = double >
      void blend
       (
         ::color::model<category_name>      & result
        ,::color::model<category_name> const& lower
        ,scalar_name                   const& alpha
        ,::color::model<category_name> const& upper
       )
       {
        ::color::operation::_internal::blend<category_name>::accumulate( result, lower, alpha, upper );
       }

     template< typename category_name, typename scalar_name = double >
      ::color::model<category_name>
      mix
       (
         ::color::model<category_name> const& lower
        ,scalar_name                   const& alpha
        ,::color::model<category_name> const& upper
       )
       {
        return ::color::operation::_internal::blend<category_name>::mix( lower, alpha, upper );
       }

    }
  }

#endif
