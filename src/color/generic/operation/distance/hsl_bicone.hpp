#ifndef  color_generic_operation_distance_usher_hue_bicone
#define  color_generic_operation_distance_usher_hue_bicone

// ::color::operation::_internal::usher<category_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::hsl_bicone_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::hsl<scalar_type>  hsl_type;
            typedef ::color::constant::generic< category_name > constant_type;

            static void getXYZ( scalar_type  &x, scalar_type  &y, scalar_type  &z, hsl_type const& c )
             {
              scalar_type radians =  c.template get<0>() *constant_type::deg2rad();
              scalar_type const lightnes = c.template get<2>() / scalar_type(100);
              scalar_type const saturation = c.template get<1>() / scalar_type(100);

              scalar_type radius  =( scalar_type(1) - fabs( scalar_type(2)* lightnes - scalar_type(1) ) ); // radius *=  radius_scale;

              x = radius * saturation * cos( radians );
              y = radius * saturation * sin( radians );
              z =  scalar_type(2) * lightnes  - scalar_type(1);  // z *=  z_scale;
             }

            static   scalar_type square( scalar_type const& s ){ return s * s; }

            static scalar_type process( model_type const& left, model_type const& right )
             {
              hsl_type left_hsl(left);
              hsl_type right_hsl(right);
              scalar_type xL, yL, zL; getXYZ( xL, yL, zL, left_hsl  );
              scalar_type xR, yR, zR; getXYZ( xR, yR, zR, right_hsl );
              scalar_type result = sqrt( square(xL-xR) + square(yL-yR) + square(zL-zR) );
              return result;
             }
         };

      }
    }
  }

#endif
