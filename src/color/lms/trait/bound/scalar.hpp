#ifndef color__internal_lms_bound_scalar
#define color__internal_lms_bound_scalar

// ::color::_internal::lms::bound::scalar< index_type, scalar_name >

#include "../../constant/matrix.hpp"
#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"



namespace color
 {
  namespace _internal
   {
    namespace lms
     {
      namespace bound
       {

        template< typename index_name, typename scalar_name, ::color::constant::lms::reference_enum reference_number >
         struct scalar
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::constant::lms::matrix< scalar_type, reference_number >     matrix_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             typedef ::color::_internal::lms::bound::scalar< index_type, scalar_type, reference_number > this_type;

             static scalar_type max( scalar_type const& s ) { return ( scalar_type(0) <              s ) ? s : scalar_type(0); }
             static scalar_type min( scalar_type const& s ) { return ( s              < scalar_type(0) ) ? s : scalar_type(0); }

             static scalar_type l_max() { return scalar_type(100) * ( this_type::max( matrix_type::a11() ) + this_type::max( matrix_type::a12() ) + this_type::max( matrix_type::a13() ) ); }
             static scalar_type l_min() { return scalar_type(100) * ( this_type::min( matrix_type::a11() ) + this_type::min( matrix_type::a12() ) + this_type::min( matrix_type::a13() ) ); }

             static scalar_type m_max() { return scalar_type(100) * ( this_type::max( matrix_type::a21() ) + this_type::max( matrix_type::a22() ) + this_type::max( matrix_type::a23() ) ); }
             static scalar_type m_min() { return scalar_type(100) * ( this_type::min( matrix_type::a21() ) + this_type::min( matrix_type::a22() ) + this_type::min( matrix_type::a23() ) ); }

             static scalar_type s_max() { return scalar_type(100) * ( this_type::max( matrix_type::a31() ) + this_type::max( matrix_type::a32() ) + this_type::max( matrix_type::a33() ) ); }
             static scalar_type s_min() { return scalar_type(100) * ( this_type::min( matrix_type::a31() ) + this_type::min( matrix_type::a32() ) + this_type::min( matrix_type::a33() ) ); }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static scalar_type max_list[] = { this_type::l_max(), this_type::m_max(), this_type::s_max() };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static scalar_type max_list[] = { this_type::l_max(), this_type::m_max(), this_type::s_max() };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static scalar_type min_list[] = { this_type::l_min(), this_type::m_min(), this_type::s_min() };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static scalar_type min_list[] = { this_type::l_min(), this_type::m_min(), this_type::s_min() };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { this_type::l_max() - this_type::l_min(), this_type::m_max() - this_type::m_min(), this_type::s_max() - this_type::s_min() };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { this_type::l_max() - this_type::l_min(), this_type::m_max() - this_type::m_min(), this_type::s_max() - this_type::s_min() };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif
