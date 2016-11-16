#ifndef color_type_pack3
#define color_type_pack3

// ::color::type::pack3

namespace color
 {
  namespace type
   {

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct pack3 {};

    typedef  ::color::type::pack3<  2,  3,  3 >  split233_t;
    typedef  ::color::type::pack3<  3,  2,  3 >  split323_t;
    typedef  ::color::type::pack3<  3,  3,  2 >  split332_t;

    typedef  ::color::type::pack3<  4,  2,  2 >  split422_t;
    typedef  ::color::type::pack3<  2,  4,  2 >  split242_t;
    typedef  ::color::type::pack3<  2,  2,  4 >  split224_t;

    typedef  ::color::type::pack3<  5,  5,  5 >  split555_t;

    typedef  ::color::type::pack3<  6,  5,  5 >  split655_t;
    typedef  ::color::type::pack3<  5,  6,  5 >  split565_t;
    typedef  ::color::type::pack3<  5,  5,  6 >  split556_t;

    typedef  ::color::type::pack3<  7,  7,  2 >  split772_t;
    typedef  ::color::type::pack3<  7,  2,  7 >  split727_t;
    typedef  ::color::type::pack3<  2,  7,  7 >  split277_t;

    typedef  ::color::type::pack3<  8,  8,  8 >  split888_t;

    typedef  ::color::type::pack3< 12, 10, 10 >  splitCAA_t;
    typedef  ::color::type::pack3< 10, 12, 10 >  splitACA_t;
    typedef  ::color::type::pack3< 10, 10, 12 >  splitAAC_t;

   }
 }

#endif