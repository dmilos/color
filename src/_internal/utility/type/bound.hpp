#ifndef color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d
#define color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d

// ::color::_internal::utility::type::bound< number_name, number_const_return_name >

#include <cstdint>

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename number_name, typename number_const_return_name >
         struct bound
          {
           public:
           typedef number_name              number_type;
           typedef number_const_return_name number_const_return_type;

           static /*constexpr*/ number_const_return_type  maximum()
            { // Purposly set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ number_const_return_type  minimum()
            { // Purposly set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ number_const_return_type range()
            {
             static number_type value = maximum() - minimum();
             return value;
            }
          };

        template <>
         struct bound<bool, bool const& >
         {
          typedef bool           number_type;
          typedef bool const&    number_const_return_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = true;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = false;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = maximum(  ) - minimum();
            return value;
           }
         };

        template <>
         struct bound<float, float const& >
         {
          typedef float           number_type;
          typedef float const&    number_const_return_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value=1;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value=0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = maximum(  ) - minimum();
            return value;
           }
         };

        template <>
         struct bound<double, double const& >
         {
          typedef double           number_type;
          typedef double const&    number_const_return_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value=1;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value=0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = maximum() - minimum();
            return value;
           }
         };

        template <>
         struct bound<long double, long double const& >
         {
          typedef long double           number_type;
          typedef long double const&    number_const_return_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = 1;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = maximum() - minimum();
            return value;
           }

         };

        template <>
         struct bound<unsigned char, unsigned char const& >
         {
          typedef unsigned char           number_type;
          typedef unsigned char const&    number_const_return_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value=255;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value=0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = maximum() - minimum();
            return value;
           }

         };

       }
     }
   }
 }

#endif
