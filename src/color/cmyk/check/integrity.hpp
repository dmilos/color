#ifndef color_cmyk_check_integrity
#define color_cmyk_check_integrity
// ::color::check::integrity< category >( model )

#include "../../generic/trait/scalar.hpp"
#include "../../generic/check/integrity.hpp"
#include "../../generic/trait/bound.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {
      namespace _privateCMYK
       {

        template< typename category_name >
         struct integrity
          {
           public:
            typedef category_name category_type;

            typedef ::color::model<category_type>      model_type;
            typedef ::color::trait::bound< category_type >        bound_type;
            typedef ::color::trait::scalar< category_type >       scalar_trait_type;

            enum
             {
                  cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
              ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
              , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
              ,    key_p  = ::color::place::_internal::key<category_type>::position_enum
             };


            static bool process( model_type const& m )
             {
              if( m.template get<key_p>() == bound_type::template maximum<key_p>() ) { return false; }

              if( m.template get<   cyan_p>() == bound_type::template minimum<   cyan_p>() ) { return true; }
              if( m.template get<magenta_p>() == bound_type::template minimum<magenta_p>() ) { return true; }
              if( m.template get< yellow_p>() == bound_type::template minimum< yellow_p>() ) { return true; }

              return false;
             }
          };

       }

      template< > struct integrity< ::color::category::cmyk_uint8  > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint8  >{ };
      template< > struct integrity< ::color::category::cmyk_uint16 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint16 >{ };
      template< > struct integrity< ::color::category::cmyk_uint32 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint32 >{ };
      template< > struct integrity< ::color::category::cmyk_uint64 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint64 >{ };


      template<>
       struct integrity< ::color::category::cmyk_float >
        {
         public:
          typedef ::color::category::cmyk_float category_type;

          typedef ::color::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

           enum
            {
                 cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
             ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
             , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
             ,    key_p  = ::color::place::_internal::key<category_type>::position_enum
            };

          static bool process( model_type const& m )
           {
            if( m.template get<key_p>() == bound_type::template maximum<key_p>() ) { return false; }

            if( true == scalar_trait_type::is_small( m.template get<   cyan_p>() - bound_type::template minimum<   cyan_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get<magenta_p>() - bound_type::template minimum<magenta_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get<    key_p>() - bound_type::template minimum<    key_p>() ) ) { return true; }

            return false;
           }
        };

      template<>
       struct integrity< ::color::category::cmyk_double >
        {
         public:
          typedef ::color::category::cmyk_double category_type;

          typedef ::color::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

          enum
           {
                cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
            ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
            , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
            ,    key_p  = ::color::place::_internal::key<category_type>::position_enum
           };

          static bool process( model_type const& m )
           {
            if( m.template get<key_p>() == bound_type::template maximum<key_p>() ) { return false; }

            if( true == scalar_trait_type::is_small( m.template get<   cyan_p>() - bound_type::template minimum<   cyan_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get<magenta_p>() - bound_type::template minimum<magenta_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get< yellow_p>() - bound_type::template minimum< yellow_p>() ) ) { return true; }

            return false;
           }
        };

      template<>
       struct integrity< ::color::category::cmyk_ldouble >
        {
         public:
          typedef ::color::category::cmyk_ldouble category_type;

          typedef ::color::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

          enum
           {
                cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
            ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
            , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
            ,    key_p  = ::color::place::_internal::key<category_type>::position_enum
           };

          static bool process( model_type const& m )
           {
            if( m.template get<key_p>() == bound_type::template maximum<key_p>() ) { return false; }

            if( true == scalar_trait_type::is_small( m.template get<   cyan_p>() - bound_type::template minimum<   cyan_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get<magenta_p>() - bound_type::template minimum<magenta_p>() ) ) { return true; }
            if( true == scalar_trait_type::is_small( m.template get< yellow_p>() - bound_type::template minimum< yellow_p>() ) ) { return true; }

            return false;
           }
        };

     }
   }
 }

#endif
