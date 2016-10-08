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
        result.template set<0>( diverse_type::template process<0>( std::pow( s, value ) ) );
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
        result.template set<0>( diverse_type::template process<0>( std::pow( s, value ) ) );
        return result;
       }

    }
  }

#endif
