#ifndef color_type_split3
#define color_type_split3

// ::color::type::split3_t

namespace color
 {
  namespace type
   {

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct split3_t {};

    typedef  ::color::type::split3_t< 2, 3, 3 > split233_t;
    typedef  ::color::type::split3_t< 3, 2, 3 > split323_t;
    typedef  ::color::type::split3_t< 3, 3, 2 > split332_t;

    typedef  ::color::type::split3_t< 4, 2, 2 > split422_t;
    typedef  ::color::type::split3_t< 2, 4, 2 > split242_t;
    typedef  ::color::type::split3_t< 2, 2, 4 > split224_t;

    typedef  ::color::type::split3_t< 6, 5, 5 > split655_t;
    typedef  ::color::type::split3_t< 5, 6, 5 > split565_t;
    typedef  ::color::type::split3_t< 5, 5, 6 > split556_t;

    typedef  ::color::type::split3_t< 8, 8, 8 > split888_t;

   }
 }

#endif