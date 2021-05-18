#ifndef  color_generic_operation_distance_usher_euclid
#define  color_generic_operation_distance_usher_euclid

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
        struct usher< category_name, category_name, ::color::constant::distance::euclid_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::container< category_type >              container_trait_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;
            typedef typename ::color::trait::index< category_type >::instance_type     index_type;

            typedef ::color::operation::_internal::usher< category_name, category_name, ::color::constant::distance::euclid_entity> this_type;

          private:
            static   scalar_type square( scalar_type const& s ){ return s * s; }

          public:
            static scalar_type process( model_type const& left, model_type const& right )
             {
              scalar_type lenght = 0;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get( index ) < right.get( index ) ) //! some components can be unsigned
                 {
                  lenght += this_type::square( scalar_type( right.get( index ) - left.get( index ) ) );
                 }
                else
                 {
                  lenght +=  this_type::square( scalar_type( left.get( index ) - right.get( index ) ) );
                 }
               }

              return sqrt( lenght );
             }
         };

      }
    }
  }

#endif
