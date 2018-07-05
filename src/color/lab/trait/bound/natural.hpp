#ifndef color__internal_lab_bound_natural
#define color__internal_lab_bound_natural

// ::color::_internal::lab::bound::natural< index_type, scalar_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"


#include "../../constant/reference.hpp"


namespace color
 {
  namespace _internal
   {
    namespace lab
     {
      namespace bound
       {
        template< typename scalar_name, typename index_name, ::color::constant::lab::reference_enum = ::color::constant::lab::error_entity >
         struct natural
          {
          };

        template< typename scalar_name, typename index_name >
         struct natural< scalar_name, index_name, ::color::constant::lab::CIE_entity >
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             typedef natural< scalar_name, index_name, ::color::constant::lab::CIE_entity > this_type;


             static instance_type magic()
              {
               return instance_type(1)-instance_type(16)/instance_type(116);
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { 100, 500*this_type::magic(), 200*this_type::magic() };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 100, 500*this_type::magic(), 200*this_type::magic() };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { 0, -500*this_type::magic(), -200*this_type::magic() };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, -500*this_type::magic(), -200*this_type::magic() };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { 100, 1000*this_type::magic(), 400*this_type::magic() };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 100, 1000*this_type::magic(), 400*this_type::magic() };
                return range_list[index];
              }
          };

        template< typename scalar_name, typename index_name >
         struct natural< scalar_name, index_name, ::color::constant::lab::Hunter_entity >
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;
             
             typedef natural< scalar_name, index_name, ::color::constant::lab::Hunter_entity > this_type;

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { 100, scalar_type( 2552.3 ), scalar_type( 67.0387 ) };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 100, scalar_type( 2552.3 ), scalar_type( 67.0387 ) };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { 0, scalar_type( -172.355 ), scalar_type( -865.984 ) };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, scalar_type( -172.355 ), scalar_type( -865.984 ) };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { 100, this_type::maximum(1)-this_type::minimum(1), this_type::maximum(2)-this_type::minimum(2) };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 100, this_type::maximum(1)-this_type::minimum(1), this_type::maximum(2)-this_type::minimum(2) };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif
