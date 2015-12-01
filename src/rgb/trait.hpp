#ifndef color_rgb_trait_768e5451_362e_4862_96d0_53155a0d69db
#define color_rgb_trait_768e5451_362e_4862_96d0_53155a0d69db


#include "./category.hpp"
#include "../generic/trait.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct trait< ::color::category::rgb_uint8>
      : public ::color::_internal::trait< ::color::category::generic_uint8< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::rgb_uint16>
      : public ::color::_internal::trait< ::color::category::generic_uint16< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::rgb_uint32>
      : public ::color::_internal::trait< ::color::category::generic_uint32< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::rgb_float >
      : public ::color::_internal::trait< ::color::category::generic_float< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::rgb_double>
      : public ::color::_internal::trait< ::color::category::generic_double< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::rgb_ldouble>
      : public ::color::_internal::trait< ::color::category::generic_ldouble< 3 > >
      {
      };

   }
 }

#endif
