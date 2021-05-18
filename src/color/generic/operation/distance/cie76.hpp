#ifndef  color_generic_operation_distance_usher_cie76
#define  color_generic_operation_distance_usher_cie76

// ::color::operation::_internal::usher<category_name>::process( left, right )


#include "./constant.hpp"
#include "./usher.hpp"



 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_left_name, typename category_right_name >
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CIE76_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            typedef ::color::lab<scalar_type>  lab_type;
            typedef typename lab_type::category_type  lab_category_type;
            typedef ::color::operation::_internal::usher<lab_category_type, lab_category_type,::color::constant::distance::euclid_entity>  lab_distance_type;

          public:
            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              lab_type lab_left(  left  );
              lab_type lab_right( right );

              return lab_distance_type::process( lab_left, lab_right );
             }
         };

      }
    }
  }

#endif
