#ifndef  color_hsl_fix_unique
#define  color_hsl_fix_unique

#include "../category.hpp"
#include "../../generic/fix/unique.hpp"


 namespace color
  {
   namespace fix
    {
     namespace _internal
      {
       namespace _privateHSL
        {

       template< typename category_name >
        struct unique
         {
          public:
            typedef category_name  category_type;

            typedef typename ::color::_internal::model<category_type>  model_type;

            static void process( model_type &result )
             {
              if(   ( result.template get<2>() == bound_type::template maximum<2>() )
                  ||( result.template get<2>() == bound_type::template minimum<2>() )
                )
               {
                result.template set<0>( bound_type::template minimum<0>();
                result.template set<1>( bound_type::template minimum<1>();
                return;
               }

              if( result.template get<1>() == bound_type::template maximum<2>() )
               {
                result.template set<0>( bound_type::template minimum<0>();
                return;
               }

             }

            static void process(  model_type &result, model_type const& right )
             {
              if(   ( right.template get<2>() == bound_type::template maximum<2>() )
                  ||( right.template get<2>() == bound_type::template minimum<2>() )
                )
               {
                result.template set<0>( bound_type::template minimum<0>() );
                result.template set<1>( bound_type::template minimum<1>() );
                result.template set<2>( right.template get<2>() );
                return;
               }

              if( m.template get<1>() == bound_type::template maximum<2>() )
               {
                result.template set<0>( bound_type::template minimum<0>() );
                result.template set<1>( right.template get<1>() );
                result.template set<2>( right.template get<2>() );
                return;
               }

              result = right;
              return;

             }

         };

      }

       template<> struct unique< ::color::category::hsl_uint8   > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint8  >{ };
       template<> struct unique< ::color::category::hsl_uint16  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint16 >{ };
       template<> struct unique< ::color::category::hsl_uint32  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint32 >{ };
       template<> struct unique< ::color::category::hsl_uint64  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint64 >{ };
       template<> struct unique< ::color::category::hsl_float   > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_float  >{ };
       template<> struct unique< ::color::category::hsl_double  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_double >{ };
       template<> struct unique< ::color::category::hsl_ldouble > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_ldouble>{ };

       }
    }
  }

#endif
