#ifndef color__internal_luv_bound_positive
#define color__internal_luv_bound_positive

// ::color::_internal::luv::bound::positive< index_name, number_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"



namespace color
 {
  namespace _internal
   {
    namespace luv
     {
      namespace bound
       {

        template< typename number_name, typename index_name >
         struct positive
          {
           public:
             typedef number_name  number_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< number_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             typedef ::color::_internal::luv::bound::positive< number_type, index_name > this_type;

             static instance_type lower100()
              {
               return 0;
              }

             static instance_type higher100()
              {
               return std::numeric_limits<number_type>::max();
              }
              
             static instance_type span100()
              {
               return this_type::higher100() - this_type::lower100();
              }

             static instance_type higher()
              {
               return std::numeric_limits<number_type>::max()/2 + 128;
              }

             static instance_type lower()
              {
               return std::numeric_limits<number_type>::max()/2 - 127;
              }

             static instance_type span()
              {
               return this_type::higher() - this_type::lower();
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { this_type::higher100(), this_type::higher(), this_type::higher() };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { this_type::higher100(), this_type::higher(), this_type::higher() };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { this_type::lower100(), this_type::lower(), this_type::lower() };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { this_type::lower100(), this_type::lower(), this_type::lower() };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { this_type::span100(), this_type::span(), this_type::span() };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { this_type::span100(), this_type::span(), this_type::span() };
                return range_list[index];
              }
          };


       }
     }
   }
 }

#endif
