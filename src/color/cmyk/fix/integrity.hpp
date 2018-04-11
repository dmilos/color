#ifndef  color_cmyk_fix_unique
#define  color_cmyk_fix_unique

#include "../trait/bound.hpp"
#include "../category.hpp"
#include "../../generic/fix/unique.hpp"
#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"



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

            typedef ::color::model<category_type>  model_type;
            typedef ::color::trait::bound<category_type>      bound_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef ::color::_internal::diverse< category_type >    diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
                  cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
              ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
              , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
              ,    key_p  = ::color::place::_internal::key<category_type>::position_enum
             };

            static void process( model_type &result )
             {
              if( result.template get<key_p>() == bound_type::template maximum<key_p>() )
               {
                result.template set<cyan_p>( bound_type::template minimum<cyan_p>() );
                result.template set<magenta_p>( bound_type::template minimum<magenta_p>() );
                result.template set<yellow_p>( bound_type::template minimum<yellow_p>() );
                return ;
               }

              if( result.template get<cyan_p>() == bound_type::template minimum<cyan_p>() ) { return; }
              if( result.template get<magenta_p>() == bound_type::template minimum<magenta_p>() ) { return; }
              if( result.template get<yellow_p>() == bound_type::template minimum<yellow_p>() ) { return; }

              scalar_type cyan = normalize_type::template process<cyan_p>( result.template get<cyan_p>() );
              scalar_type key  = normalize_type::template process<key_p>( result.template get<key_p>() );

              result.template set<cyan_p>( bound_type::template minimum<cyan_p>() );
              result.template set<magenta_p>( bound_type::template minimum<magenta_p>() );
              result.template set<yellow_p>( bound_type::template minimum<yellow_p>() );

              result.template set<key_p>( diverse_type::template process<key_p>( ( 1- ( 1- cyan)*(1-key) ) ) );
             }

            static void process(  model_type &result, model_type const& right )
             {
              if( result.template get<key_p>() == bound_type::template maximum<key_p>() )
               {
                result.template set<cyan_p>( bound_type::template minimum<cyan_p>() );
                result.template set<magenta_p>( bound_type::template minimum<magenta_p>() );
                result.template set<yellow_p>( bound_type::template minimum<yellow_p>() );
                result.template set<key_p>( bound_type::template maximum<key_p>() );
                return ;
               }

              result = right;
              
              if( result.template get<cyan_p>() == bound_type::template minimum<cyan_p>() ) { return; }
              if( result.template get<magenta_p>() == bound_type::template minimum<magenta_p>() ) { return; }
              if( result.template get<yellow_p>() == bound_type::template minimum<yellow_p>() ) { return; }

              scalar_type cyan = normalize_type::template process<cyan_p>( result.template get<cyan_p>() );
              scalar_type key  = normalize_type::template process<key_p>( result.template get<key_p>() );

              result.template set<cyan_p>( bound_type::template minimum<cyan_p>() );
              result.template set<magenta_p>( bound_type::template minimum<magenta_p>() );
              result.template set<yellow_p>( bound_type::template minimum<yellow_p>() );

              result.template set<key_p>( diverse_type::template process<key_p>( ( 1- ( 1- cyan)*(1-key) ) ) );

             }

         };

      }
    }
  }

#endif
