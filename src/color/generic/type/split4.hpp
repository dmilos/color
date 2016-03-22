#ifndef color_type_split4
#define color_type_split4

// ::color::type::split4_t

namespace color
 {
  namespace type
   {

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct split4_t {};

    typedef  ::color::type::split4_t<  2,  2,  2,  2 > split2222_t;

    typedef  ::color::type::split4_t<  4,  4,  4,  4 > split4444_t;

    typedef  ::color::type::split4_t<  5,  5,  5,  1 > split5551_t;
    typedef  ::color::type::split4_t<  1,  5,  5,  5 > split1555_t;

    typedef  ::color::type::split4_t<  6,  6,  6,  6 > split6666_t;

    typedef  ::color::type::split4_t<  8,  8,  8,  8 > split8888_t;

    typedef  ::color::type::split4_t<  2, 10, 10, 10 > split2AAA_t;
    typedef  ::color::type::split4_t< 10, 10, 10,  2 > splitAAA2_t;

   }
 }

#endif
