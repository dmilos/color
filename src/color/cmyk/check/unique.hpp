#ifndef color_cmyk_check_unique
#define color_cmyk_check_unique
// ::color::check::unique< category >( model )

#include "../../generic/trait/scalar.hpp"
#include "../../generic/check/unique.hpp"
#include "../category.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {
      namespace _privateCMYK
       {

        template< typename category_name >
         struct unique
          {
           public:
            typedef category_name category_type;

            typedef ::color::_internal::model<category_type>      model_type;
            typedef ::color::trait::bound< category_type >        bound_type;
            typedef ::color::trait::scalar< category_type >       scalar_trait_type;

            static bool process( model_type const& m )
             {
              if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }

              if( m.template get<0>() != m.template get<1>() ) { return true; }
              if( m.template get<0>() != m.template get<2>() ) { return true; }
              if( m.template get<1>() != m.template get<2>() ) { return true; }

              return false;
             }
          };

       }

      template< > struct unique< ::color::category::cmyk_uint8  > : public ::color::check::_internal::_privateCMYK::unique< ::color::category::cmyk_uint8  >{ };
      template< > struct unique< ::color::category::cmyk_uint16 > : public ::color::check::_internal::_privateCMYK::unique< ::color::category::cmyk_uint16 >{ };
      template< > struct unique< ::color::category::cmyk_uint32 > : public ::color::check::_internal::_privateCMYK::unique< ::color::category::cmyk_uint32 >{ };
      template< > struct unique< ::color::category::cmyk_uint64 > : public ::color::check::_internal::_privateCMYK::unique< ::color::category::cmyk_uint64 >{ };


      template<>
       struct unique< ::color::category::cmyk_float>
        {
         public:
          typedef ::color::category::cmyk_float category_type;

          typedef ::color::_internal::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }

            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<1>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<2>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<1>() - m.template get<2>() ) ) { return true; }

            return false;
           }
        };

      template<>
       struct unique< ::color::category::cmyk_double >
        {
         public:
          typedef ::color::category::cmyk_double category_type;

          typedef ::color::_internal::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }

            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<1>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<2>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<1>() - m.template get<2>() ) ) { return true; }

            return false;
           }
        };

      template<>
       struct unique< ::color::category::cmyk_ldouble >
        {
         public:
          typedef ::color::category::cmyk_ldouble category_type;

          typedef ::color::_internal::model<category_type>      model_type;
          typedef ::color::trait::bound< category_type >        bound_type;
          typedef ::color::trait::scalar< category_type >       scalar_trait_type;

          static bool process( model_type const& m )
           {
            if( m.template get<3>() == bound_type::template maximum<3>() ) { return false; }

            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<1>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<0>() - m.template get<2>() ) ) { return true; }
            if( false == scalar_trait_type::is_small( m.template get<1>() - m.template get<2>() ) ) { return true; }

            return false;
           }
        };

     }
   }
 }

#endif
