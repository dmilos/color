#ifndef color_cmy_set_blue
#define color_cmy_set_blue

// ::color::set::blue( c, val )

#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace set
    {
     namespace _privateCMY
      {

       template< typename category_name >
        inline
        void
        blue
         ( 
                    ::color::_internal::model< category_name >                                   & color_parameter
          ,typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
         )
         {
          typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

          typedef  ::color::operation::_internal::invert< akin_type > invert_type; 
          typedef  ::color::_internal::reformat<category_name, akin_type > reformat_type;

          color_parameter.template set<2>( reformat_type::template process<2,2>( invert_type::template component<2>( component_parameter ) ) );
         }

      }

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_float>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_double>( color_parameter, component_parameter );
       };

      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::cmy_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_privateCMY::blue<::color::category::cmy_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 
