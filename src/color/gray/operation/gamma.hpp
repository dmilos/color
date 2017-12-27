#ifndef color_gray_operation_gamma
#define color_gray_operation_gamma
// ::color::operation::gamma<tag_name>( )

#include "../../generic/model.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../../generic/operation/gamma.hpp"

#include "../category.hpp"

//#include "../trait/scalar.hpp"



 namespace color
  {
   namespace operation
    {

     template< typename tag_name >
      ::color::model< ::color::category::gray< tag_name > > &
      gamma
       (
                  ::color::model< ::color::category::gray< tag_name > >                                 & result
        ,typename ::color::trait::scalar< ::color::category::gray< tag_name > >::instance_type      const& value
       )
       {
        typedef ::color::category::gray< tag_name >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;

        typedef ::color::_internal::diverse< category_type >    diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        scalar_type s = normalize_type::template process<0>( result.template get<0>() );
        result.template set<0>( diverse_type::template process<0>( std::pow( s, scalar_type(1)/value ) ) );
        return result;
       }

     template< typename tag_name >
      ::color::model< ::color::category::gray< tag_name > > &
      gamma
       (
                  ::color::model< ::color::category::gray< tag_name > >                                  & result
        ,         ::color::model< ::color::category::gray< tag_name > >                             const& right
        ,typename ::color::trait::scalar< ::color::category::gray< tag_name > >::instance_type      const& value
       )
       {
        typedef ::color::category::gray< tag_name >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;

        typedef ::color::_internal::diverse< category_type >    diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        scalar_type s = normalize_type::template process<0>( right.template get<0>() );
        result.template set<0>( diverse_type::template process<0>( std::pow( s, scalar_type(1)/value ) ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_float > &
      gamma
       (
         ::color::model< ::color::category::gray_float >                                 & result
        ,::color::trait::component< ::color::category::gray_float>::instance_type    const& value
       )
       {
        typedef ::color::category::gray_float   category_type;
        typedef ::color::trait::scalar<category_type>::instance_type    scalar_type;
        typedef ::color::trait::component<category_type>::instance_type    component_type;
        result.set<0>( component_type( std::pow( result.get<0>(), scalar_type(1)/value ) ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_float > &
      gamma
       (
                  ::color::model< ::color::category::gray_float >                          & result
        ,         ::color::model< ::color::category::gray_float >                     const& right
        ,::color::trait::component< ::color::category::gray_float>::instance_type      const& value
       )
       {
        typedef ::color::category::gray_float   category_type;
        typedef  ::color::trait::scalar<category_type>::instance_type         scalar_type;
        typedef ::color::trait::component<category_type>::instance_type    component_type;
        result.set<0>(  component_type( std::pow( right.get<0>(), scalar_type(1)/value ) ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_double > &
      gamma
       (
                  ::color::model< ::color::category::gray_double >                          & result
        , ::color::trait::scalar< ::color::category::gray_double >::instance_type      const& value
       )
       {
        typedef ::color::category::gray_double   category_type;
        typedef  ::color::trait::scalar<category_type>::instance_type         scalar_type;
        typedef ::color::trait::component<category_type>::instance_type    component_type;
        result.set<0>( component_type( std::pow( result.get<0>(), scalar_type(1)/value ) ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_double > &
      gamma
       (
                  ::color::model< ::color::category::gray_double >                                  & result
        ,         ::color::model< ::color::category::gray_double >                             const& right
        , ::color::trait::scalar< ::color::category::gray_double >::instance_type      const& value
       )
       {
        typedef ::color::category::gray_double   category_type;
        typedef  ::color::trait::scalar<category_type>::instance_type    scalar_type;
        result.set<0>( std::pow( right.get<0>(), scalar_type(1)/value ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_ldouble > &
      gamma
       (
                  ::color::model< ::color::category::gray_ldouble >                                 & result
        , ::color::trait::scalar< ::color::category::gray_ldouble >::instance_type      const& value
       )
       {
        typedef ::color::category::gray_ldouble   category_type;
        typedef  ::color::trait::scalar<category_type>::instance_type    scalar_type;
        result.set<0>( std::pow( result.get<0>(), scalar_type(1)/value ) );
        return result;
       }

      inline
      ::color::model< ::color::category::gray_ldouble > &
      gamma
       (
                  ::color::model< ::color::category::gray_ldouble >                                  & result
        ,         ::color::model< ::color::category::gray_ldouble >                             const& right
        , ::color::trait::scalar< ::color::category::gray_ldouble >::instance_type      const& value
       )
       {
        typedef ::color::category::gray_ldouble   category_type;
        typedef  ::color::trait::scalar<category_type>::instance_type    scalar_type;
        result.set<0>( std::pow( right.get<0>(), scalar_type(1)/value ) );
        return result;
       }
    }
  }

#endif
