#ifndef  color_generic_operation_distance_usher_delta_gray
#define  color_generic_operation_distance_usher_delta_gray

// ::color::operation::_internal::usher<category_name>::process( left, right )

#include "../delta.hpp"

#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::delta_gray_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::gray<scalar_type> gray_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              model_type difference;
              return gray_type( ::color::operation::delta( difference, left, right ) ).template get<0>();
             }
         };

      }
    }
  }

#endif
