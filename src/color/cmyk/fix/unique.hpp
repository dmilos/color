#ifndef  color_cmyk_fix_unique
#define  color_cmyk_fix_unique

#include "../trait/bound.hpp"
#include "../category.hpp"
#include "../../generic/fix/unique.hpp"
#include "../../generic/operation/invert.hpp"



 namespace color
  {
   namespace fix
    {
     namespace _internal
      {

       template< typename tag_name >
        struct unique< ::color::category::cmyk< tag_name > >
         {
          public:
            typedef ::color::category::cmyk< tag_name >  category_type;

            typedef ::color::_internal::model<category_type>  model_type;
            typedef ::color::trait::bound<category_type>      bound_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef  ::color::operation::_internal::invert< category_type > invert_type;
            typedef ::color::_internal::diverse< category_type >    diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            static void process( model_type &result )
             {
              if( result.template get<3>() == bound_type::template maximum<3>() )
               {
                result.template set<0>( bound_type::template minimum<0>() );
                result.template set<1>( bound_type::template minimum<1>() );
                result.template set<2>( bound_type::template minimum<2>() );
                return ;
               }

              if( result.template get<0>() != result.template get<1>() ) { return; }
              if( result.template get<0>() != result.template get<2>() ) { return; }
              if( result.template get<1>() != result.template get<2>() ) { return; }

              scalar_type cyan = normalize_type::template process<0>( result.template get<0>() );
              scalar_type key  = normalize_type::template process<3>( result.template get<3>() );

              result.template set<0>( bound_type::template minimum<0>() );
              result.template set<1>( bound_type::template minimum<1>() );
              result.template set<2>( bound_type::template minimum<2>() );

              result.template set<3>( diverse_type::template process<3>( ( 1- ( 1- cyan)*(1-key) ) ) );
             }

            static void process(  model_type &result, model_type const& right )
             {
              if( result.template get<3>() == bound_type::template maximum<3>() )
               {
                result.template set<0>( bound_type::template minimum<0>() );
                result.template set<1>( bound_type::template minimum<1>() );
                result.template set<2>( bound_type::template minimum<2>() );
                result.template set<3>( bound_type::template maximum<3>() );
                return ;
               }

              result = right;

              if( result.template get<0>() != result.template get<1>() ) { return; }
              if( result.template get<0>() != result.template get<2>() ) { return; }
              if( result.template get<1>() != result.template get<2>() ) { return; }

              scalar_type cyan = normalize_type::template process<0>( result.template get<0>() );
              scalar_type key  = normalize_type::template process<3>( result.template get<3>() );

              result.template set<0>( bound_type::template minimum<0>() );
              result.template set<1>( bound_type::template minimum<1>() );
              result.template set<2>( bound_type::template minimum<2>() );

              result.template set<3>( diverse_type::template process<3>( ( 1- ( 1- cyan)*(1-key) ) ) );

             }

         };

      }
    }
  }

#endif
