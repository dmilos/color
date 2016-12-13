#ifndef color_hsi_trait_info
#define color_hsi_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::hsi_uint8 >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_uint16 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_uint32 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_uint64 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_float >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_double >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::hsi_ldouble >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
