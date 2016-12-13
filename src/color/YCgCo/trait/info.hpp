#ifndef color_YCgCo_trait_info
#define color_YCgCo_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::YCgCo_uint8 >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_uint16 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_uint32 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_uint64 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_float >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_double >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YCgCo_ldouble >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
