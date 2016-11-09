#ifndef color_type_split3
#define color_type_split3

// ::color::type::split3

namespace color
 {
  namespace type
   {

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct split3 {};

    typedef  ::color::type::split3<  2,  3,  3 > split233_t, split233_type;
    typedef  ::color::type::split3<  3,  2,  3 > split323_t, split323_type;
    typedef  ::color::type::split3<  3,  3,  2 > split332_t, split332_type;

    typedef  ::color::type::split3<  4,  2,  2 > split422_t, split422_type;
    typedef  ::color::type::split3<  2,  4,  2 > split242_t, split242_type;
    typedef  ::color::type::split3<  2,  2,  4 > split224_t, split224_type;

    typedef  ::color::type::split3<  5,  5,  5 > split555_t, split555_type;

    typedef  ::color::type::split3<  6,  5,  5 > split655_t, split655_type;
    typedef  ::color::type::split3<  5,  6,  5 > split565_t, split565_type;
    typedef  ::color::type::split3<  5,  5,  6 > split556_t, split556_type;

    typedef  ::color::type::split3<  7,  7,  2 > split772_t, split772_type;
    typedef  ::color::type::split3<  7,  2,  7 > split727_t, split727_type;
    typedef  ::color::type::split3<  2,  7,  7 > split277_t, split277_type;

    typedef  ::color::type::split3<  8,  8,  8 > split888_t, split888_type;

    typedef  ::color::type::split3< 12, 10, 10 > splitCAA_t, splitCAA_type;
    typedef  ::color::type::split3< 10, 12, 10 > splitACA_t, splitACA_type;
    typedef  ::color::type::split3< 10, 10, 12 > splitAAC_t, splitAAC_type;

   }
 }

#endif