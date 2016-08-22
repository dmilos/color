#ifndef color_hcg_trait_info
#define color_hcg_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::hcg_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::hcg_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif
