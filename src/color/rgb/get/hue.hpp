#ifndef color_rgb_get_hue
#define color_rgb_get_hue

// ::color::get::hue( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/hue.hpp"
#include "../../generic/constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"



 namespace color
  {

   namespace constant
    {
     namespace /*rgb::*/hue
      {

       enum formula_enum
        {
          error_entity
         ,hexagon_entity                     //!< =  Preucil
         ,polar_atan2_entity                 //!< EHB(atan2) = Evans, Hanson, and Brewer
         ,polar_acos_entity                  //!< EHB(acos)  = Evans, Hanson, and Brewer
         ,polar_entity = polar_atan2_entity  //!< Default polar formula
        };

       namespace _internal
        {

         template < enum ::color::constant::hue::formula_enum hue_number > struct algorithm{};

        }

      }
    }

   namespace get
    {

     namespace _internal { namespace rgb 
      {

       template< typename tag_name >
        inline
        typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
        hue
         (
           ::color::model< ::color::category::rgb< tag_name > >                                         const& color_parameter
          ,::color::constant::hue::_internal::algorithm< ::color::constant::hue::hexagon_entity >       const& algorithm_param
         )
         {
          typedef ::color::category::rgb< tag_name >  category_type;
          typedef typename ::color::trait::scalar<category_type> scalar_trait_type;
          typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

          typedef ::color::_internal::normalize< category_type > normalize_type;
          typedef ::color::_internal::diverse< category_type >    diverse_type; //! Diverse to self

          typedef ::color::trait::container<category_type>     container_trait_type;

          enum
           {
             red_p   = ::color::place::_internal::red<category_type>::position_enum
            ,green_p = ::color::place::_internal::green<category_type>::position_enum
            ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
           };

          scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
          scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
          scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

          const scalar_type hi = std::max<scalar_type>( { r, g, b } );
          const scalar_type lo = std::min<scalar_type>( { r, g, b } );
          scalar_type delta = hi - lo;

          scalar_type h = 0;

          if( false == scalar_trait_type::is_small( delta ) )
           {
            if( hi == r )
             {
              h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
             }
            if( hi == g )
             {
              h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
             }
            if( hi == b )
             {
              h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
             }
           }

          return diverse_type::template process< red_p >(h);
         }

       template< typename tag_name >
        inline
        typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
         hue
         (
           ::color::model< ::color::category::rgb< tag_name > >                                         const& color_parameter
          ,::color::constant::hue::_internal::algorithm< ::color::constant::hue::polar_atan2_entity >  const& algorithm_param
         )
         {
          typedef ::color::category::rgb< tag_name >  category_type;
          typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

          typedef ::color::_internal::normalize< category_type > normalize_type;
          typedef ::color::_internal::diverse< category_type >    diverse_type; //! Diverse to self

          typedef ::color::constant::generic< category_type > generic_constant_type;

          enum
           {
             red_p   = ::color::place::_internal::red<category_type>::position_enum
            ,green_p = ::color::place::_internal::green<category_type>::position_enum
            ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
           };

          scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
          scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
          scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

          scalar_type h = 0;

          scalar_type c1 = scalar_type(2) * r - g - b ;
          scalar_type c2 = (g - b) * generic_constant_type::sqrt_3();
          scalar_type thetaX = atan2(c2, c1);
          if (thetaX < 0) { thetaX += generic_constant_type::two_pi(); }
          h = thetaX;

          h /= generic_constant_type::two_pi();

          return diverse_type::template process< red_p >(h);
         }

       template< typename tag_name >
        inline
        typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
         hue
         (
           ::color::model< ::color::category::rgb< tag_name> >                       const& color_parameter
          ,::color::constant::hue::_internal::algorithm< ::color::constant::hue::polar_acos_entity >  const& algorithm_param
         )
         {
          typedef ::color::category::rgb< tag_name >  category_type;
          typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

          typedef ::color::_internal::normalize< category_type > normalize_type;
          typedef ::color::_internal::diverse< category_type >    diverse_type; //! Diverse to self

          typedef ::color::constant::generic< category_type > generic_constant_type;

          enum
           {
             red_p   = ::color::place::_internal::red<category_type>::position_enum
            ,green_p = ::color::place::_internal::green<category_type>::position_enum
            ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
           };

          scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
          scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
          scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

          scalar_type h = 0;

          scalar_type alpha = ( (r-g) + ( r- b) ) * scalar_type( 0.5 );
          scalar_type beta =  (r-g)*(r-g) + (r-b)*(g-b) ;
                      beta = sqrt( beta );
          scalar_type thetaA = acos( alpha / beta );
          if( b > g ) { thetaA = generic_constant_type::two_pi() - thetaA; }
          h = thetaA;

          h /= generic_constant_type::two_pi();

          return diverse_type::template process< red_p >(h);
         }

      }}

     template
      <
        enum ::color::constant::hue::formula_enum hue_number = ::color::constant::hue::hexagon_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       hue
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::hue< tag_name >( color_parameter, ::color::constant::hue::_internal::algorithm< hue_number >{} );
       }

    }
  }

#endif
