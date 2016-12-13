#ifndef color_gray_trait_info
#define color_gray_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::gray_bool    >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_uint8   >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_uint16  >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_uint32  >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_uint64  >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_float   >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_double  >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::gray_ldouble >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
