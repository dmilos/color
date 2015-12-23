#ifndef color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d
#define color__internal_trait_2ad5c81b_a127_4589_b065_b9f05265855d

// ::color::_internal::utility::type::bound< number_name, number_const_return_name >

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename number_name, typename number_const_return_name = number_name const& >
         struct bound
          {
           public:
           typedef number_name              number_type;
           typedef number_const_return_name number_const_return_type;

           // Having this typedef is bad idea
           typedef bound<number_type,number_const_return_type> this_type;

           static /*constexpr*/ number_const_return_type  maximum()
            { // Purposely set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ number_const_return_type  minimum()
            { // Purposely set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ number_const_return_type range()
            {
             static number_type value =  this_type::maximum() - this_type::minimum();
             return value;
            }
          };

        template <>
         struct bound<bool, bool const& >
         {
          typedef bool           number_type;
          typedef bool const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

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
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint8_t, std::uint8_t const& >
         {
          typedef std::uint8_t           number_type;
          typedef std::uint8_t const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = 255;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint16_t, std::uint16_t const& >
         {
          typedef std::uint16_t           number_type;
          typedef std::uint16_t const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = 0xFFFF;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint32_t, std::uint32_t const& >
         {
          typedef std::uint32_t           number_type;
          typedef std::uint32_t const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = 0xFFFFFFFF;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint64_t, std::uint64_t const& >
         {
          typedef std::uint64_t           number_type;
          typedef std::uint64_t const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

          static /*constexpr*/ number_const_return_type  maximum()
           {
            static number_type value = 0xFFFFFFFFFFFFFFFFu;
            return value;
           }

          static /*constexpr*/ number_const_return_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ number_const_return_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<float, float const& >
         {
          typedef float           number_type;
          typedef float const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

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
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<double, double const& >
         {
          typedef double           number_type;
          typedef double const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

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
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<long double, long double const& >
         {
          typedef long double           number_type;
          typedef long double const&    number_const_return_type;

          typedef bound<number_type,number_const_return_type> this_type;

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
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }

         };

       }
     }
   }
 }

#endif
