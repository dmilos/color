#ifndef  color_lab_operation_distance
#define  color_lab_operation_distance

#include "../../generic/operation/distance/distance.hpp"

namespace color
 {
  namespace operation
   {
    namespace _internal
     {

      namespace lab
       {

        template< typename scalar_left_name, typename scalar_right_name >
         struct usher
          {
           public:
             typedef scalar_left_name   scalar_left_type;
             typedef scalar_right_name scalar_right_type;

             typedef scalar_left_name scalar_type;


             typedef typename ::color::lab<  scalar_left_type, ::color::constant::lab::CIE_entity >::category_type category_left_type;
             typedef typename ::color::lab< scalar_right_type, ::color::constant::lab::CIE_entity >::category_type category_right_type;

             typedef ::color::model< category_left_type  >   model_left_type;
             typedef ::color::model< category_right_type  >  model_right_type;

             static scalar_type process( model_left_type const& left, model_right_type const& right )
              {
               typedef ::color::operation::_internal::usher< category_left_type, category_right_type,::color::constant::distance::euclid_entity> usher_type;

               return usher_type::process( left, right );
              }
          };

        template< typename scalar_name >
         struct usher< scalar_name, scalar_name >
          {
           public:
             typedef scalar_name   scalar_type;

             typedef typename ::color::lab< scalar_type, ::color::constant::lab::CIE_entity >::category_type category_type;

             typedef ::color::model< category_type  >   model_type;

             static scalar_type process( model_type const& left, model_type const& right )
              {
               typedef ::color::operation::_internal::usher< category_type, category_type,::color::constant::distance::euclid_entity> usher_type;
               return usher_type::process( left, right );
              }
          };

       }

#define  color_internal_lab_distance_specialization( DP_left, DP_right ) \
      template<>\
       struct usher \
        < \
           typename ::color::lab< DP_left,  ::color::constant::lab::CIE_entity >::category_type \
          ,typename ::color::lab< DP_right, ::color::constant::lab::CIE_entity >::category_type \
          ,::color::constant::distance::CIE76_entity     \
        >   \
        : public ::color::operation::_internal::lab::usher< DP_left, DP_right > \
        { \
         typedef ::color::operation::_internal::lab::usher< DP_left, DP_right > base_type; \
         using base_type::process; \
        }

       color_internal_lab_distance_specialization( float, float );
       color_internal_lab_distance_specialization( float, double );
       color_internal_lab_distance_specialization( float, long double );

       color_internal_lab_distance_specialization( double, float );
       color_internal_lab_distance_specialization( double, double );
       color_internal_lab_distance_specialization( double, long double );

       color_internal_lab_distance_specialization( long double, float );
       color_internal_lab_distance_specialization( long double, double );
       color_internal_lab_distance_specialization( long double, long double );

#undef color_internal_lab_distance_specialization

     }
   }
 }

#endif
