#ifndef  color_generic_operation_distance_usher_rgb_special
#define  color_generic_operation_distance_usher_rgb_special

// ::color::operation::_internal::usher<category_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"
#include "../delta.hpp"



 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::rgb_special_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::rgb<scalar_type>  rgb_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              rgb_type left_rgb(left);
              rgb_type right_rgb(right);
              rgb_type difference; ::color::operation::delta( difference, left_rgb, right_rgb );

              scalar_type  d = 1;
               d *= fabs( std::max<scalar_type>( left_rgb[0] - std::max<scalar_type>( right_rgb[1], right_rgb[2] ), left_rgb[0] - std::min<scalar_type>( right_rgb[1], right_rgb[2] ) ) );
               d *= fabs( std::max<scalar_type>( left_rgb[1] - std::max<scalar_type>( right_rgb[0], right_rgb[2] ), left_rgb[1] - std::min<scalar_type>( right_rgb[0], right_rgb[2] ) ) );
               d *= fabs( std::max<scalar_type>( left_rgb[2] - std::max<scalar_type>( right_rgb[0], right_rgb[1] ), left_rgb[2] - std::min<scalar_type>( right_rgb[0], right_rgb[1] ) ) );
              //scalar_type  d = difference[0]*difference[1]*difference[2]; // d * = d;
              return d;
             }
         };

      }
    }
  }

#endif
