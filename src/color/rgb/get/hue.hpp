#ifndef color_rgb_get_hue
#define color_rgb_get_hue

// ::color::get::hue( c ) //!< WARNING return number match ::color::trait::bound< ::color::rgb< _type_ > ::category_type >( 1 )
// ::color::get::constant::rgb::hue::formula_enum


#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/hue.hpp"
#include "../../generic/constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"



 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace hue
        {

         enum formula_enum
          {
            error_entity
           ,hexagon_entity                     //!< = Preucil
           ,polar_atan2_entity                 //!< EHB(atan2) = Evans, Hanson, and Brewer
           ,polar_acos_entity                  //!< EHB(acos)  = Evans, Hanson, and Brewer
           ,polar_entity = polar_atan2_entity  //!< Default polar formula
          };

        }}
      }


     namespace _internal { namespace rgb
      {
       namespace hue
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::hue::formula_enum formula_number
          >
          struct usher
           {
            typedef category_name category_type;
            typedef ::color::model<category_type>          model_type;

            typedef typename ::color::trait::component< category_name >::return_type return_type;

            static return_type process( model_type const& color_parameter )
             {
              return color_parameter.template get<0>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::hue::hexagon_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type >        model_type;

            typedef typename ::color::trait::scalar<category_type> scalar_trait_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

            typedef typename ::color::trait::index<category_type>::instance_type index_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;
            typedef ::color::_internal::diverse< category_type >     diverse_type; //! Diverse to self

            typedef ::color::trait::container<category_type>     container_trait_type;
            typedef ::color::constant::generic< category_type > generic_constant_type;


            typedef usher< category_type, ::color::get::constant::rgb::hue::hexagon_entity >  this_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            scalar_type process( scalar_type const& r, scalar_type const& g, scalar_type const& b )
             { // angle betwen 0 and 2*PI
              m_loValue = r;  m_midValue = g;  m_hiValue = b;
              m_loIndex = 0;  m_midIndex = 1;  m_hiIndex = 2;

              if( m_midValue < m_loValue  ){ std::swap( m_midValue, m_loValue  ); std::swap( m_midIndex, m_loIndex  ); }
              if( m_hiValue  < m_midValue ){ std::swap( m_hiValue,  m_midValue ); std::swap( m_hiIndex,  m_midIndex ); }
              if( m_midValue < m_loValue  ){ std::swap( m_midValue, m_loValue  ); std::swap( m_midIndex, m_loIndex  ); }

              m_delta = m_hiValue - m_loValue;

              scalar_type h = 0;

              if( true == scalar_trait_type::is_small( m_delta ) )
               {
                return h;
               }

              switch( m_hiIndex )
               {
                case( 0 ): h = (scalar_type(60)/scalar_type(360)) * (g - b) / m_delta + (g < b ? scalar_type(1) : scalar_type(0)); break;
                case( 1 ): h = (scalar_type(60)/scalar_type(360)) * (b - r) / m_delta + (scalar_type(120)/scalar_type(360));       break;
                case( 2 ): h = (scalar_type(60)/scalar_type(360)) * (r - g) / m_delta + (scalar_type(240)/scalar_type(360));       break;
               }

              return  h * generic_constant_type::two_pi();
             }

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
              scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

              this_type t;
              return  diverse_type::template process< red_p >( t.process( r, g, b ) / generic_constant_type::two_pi() );
             }

            scalar_type m_loValue;
            index_type  m_loIndex;

            scalar_type m_midValue;
            index_type  m_midIndex;

            scalar_type m_hiValue;
            index_type  m_hiIndex;

            scalar_type  m_delta;
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::hue::polar_atan2_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type >        model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;
            typedef ::color::_internal::diverse< category_type >    diverse_type; //! Diverse to self

            typedef ::color::constant::generic< category_type > generic_constant_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static scalar_type process( scalar_type const& r, scalar_type const& g, scalar_type const& b )
             {    // angle betwen 0 and 2*PI
              scalar_type h = 0;

              scalar_type c1 = scalar_type(2) * r - g - b ;
              scalar_type c2 = (g - b) * generic_constant_type::sqrt_3();
              scalar_type thetaX = atan2(c2, c1);
              if (thetaX < 0) { thetaX += generic_constant_type::two_pi(); }
              h = thetaX;

              return h;
             }

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
              scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

              return diverse_type::template process< red_p >( process( r, g, b ) / generic_constant_type::two_pi() );
             }

           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::hue::polar_acos_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type >        model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;
            typedef ::color::_internal::diverse< category_type >    diverse_type; //! Diverse to self

            typedef ::color::constant::generic< category_type > generic_constant_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static scalar_type process( scalar_type const& r, scalar_type const& g, scalar_type const& b )
             { // angle betwen 0 and 2*PI 
              scalar_type h = 0;

              scalar_type alpha = ( (r-g) + ( r- b) ) * scalar_type( 0.5 );
              scalar_type beta =  (r-g)*(r-g) + (r-b)*(g-b) ;
                          beta = sqrt( beta );
              scalar_type thetaA = acos( alpha / beta );
              if( b > g ) { thetaA = generic_constant_type::two_pi() - thetaA; }
              h = thetaA;

              return h;
             }

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p>()   );
              scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p>()  );

              return diverse_type::template process< red_p >( process( r, g, b ) / generic_constant_type::two_pi() );
             }
           };

        }
      }}

     template
      <
        enum ::color::get::constant::rgb::hue::formula_enum formula_number = ::color::get::constant::rgb::hue::polar_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       hue
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        typedef ::color::get::_internal::rgb::hue::usher< ::color::category::rgb< tag_name >, formula_number  > usher_type;
        return usher_type::process( color_parameter );
       }

     /*template
      <
        enum ::color::get::constant::rgb::hue::formula_enum formula_number = ::color::get::constant::rgb::hue::polar_entity
       ,typename category_name = ::color::category::rgb< double >
      >
      inline
      typename ::color::trait::scalar<category_name>::return_type
       hue
       (
          typename ::color::trait::scalar<category_name>::model_type r
         ,typename ::color::trait::scalar<category_name>::model_type g
         ,typename ::color::trait::scalar<category_name>::model_type b
       )
       {
        typedef ::color::get::_internal::rgb::hue::usher< category_name, formula_number  > usher_type;
        return usher_type::process( r, g, b );
       }
       */

    }
  }

#endif
