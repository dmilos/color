
template< typename category_name >
 void test_operation()
  {
   //std::cout << std::endl;
   //std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   //std::cout << std::endl;

   typedef color::model< category_name > model_type, color_t;
   typedef typename model_type::component_type     component_type;

   model_type   u32;
   model_type   u32a;
   model_type   u32b;
   model_type   u32c;
   model_type   u32d;

   // long names discourage usage of it directly.
   color::operation::addition( u32a, u32b, u32c ); ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b, u32c );
   color::operation::addition( u32a, u32b );       ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b );
   color::operation::subtract( u32a, u32b, u32c ); ::color::operation::_internal::subtract< color_t::category_type >{}( u32a, u32b, u32c );
   color::operation::subtract( u32a, u32b );       ::color::operation::_internal::subtract< color_t::category_type >{}( u32a, u32b );
   color::operation::invert( u32a, u32b );         ::color::operation::_internal::invert< color_t::category_type >{}( u32a, u32b );
   color::operation::invert( u32a );               ::color::operation::_internal::invert< color_t::category_type >{}( u32a );
   color::operation::scale( u32a, 0.5 );           ::color::operation::_internal::scale< color_t::category_type >{}( u32a, 0.5 );
   color::operation::scale( u32a, 0.5, u32b );     ::color::operation::_internal::scale< color_t::category_type >{}( u32a, 0.5, u32b );

   color::operation::multiply( u32a, u32b, u32c );  ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b, u32c );
   color::operation::multiply( u32a, u32b );        ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b );
   //u32c = ::color::constant::gray_t<1,1>{};
   //color::operation::divide( u32a, u32b, u32c ); ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b, u32c );
   //u32b = ::color::constant::gray_t<1,1>{};
   //color::operation::divide( u32a, u32b );       ::color::operation::_internal::addition< color_t::category_type >{}( u32a, u32b );

   color::operation::median( u32a, 0.5, u32b );
   color::operation::median( u32a, u32b, 0.5, u32c );
   color::operation::median( u32a, u32b, 0.5, u32c );

   color::operation::convex( u32a, 0.5,u32b, u32c );
   color::operation::convex( u32a, 0.5,u32b, 0.2,u32c, u32d );
 //color::operation::convex( u32a, 0.5,u32b, 0.1,u32c, 0.1,u32d, u32e );

   color::operation::blend( u32b, 0.5, u32c );
   color::operation::blend( u32b, u32b, 0.5, u32c );

   // TODO color::operation::blend( u32b, u32a, u32b );
   // TODO color::operation::blend( u32a, u32b );

   ::color::operation::combine( u32, 0.1, u32a, 0.2, u32b );
   ::color::operation::combine( u32, 0.1, u32a, 0.2, u32b, 0.3, u32c );
   ::color::operation::combine( u32, 0.1, u32a, 0.2, u32b, 0.3, u32c, 0.3, u32d );

   color::operation::mix( u32b, 0.5, u32c );
   // TODO color::operation::mix( u32a, u32b );

   color::fix::integrity( u32b );
   color::fix::integrity( u32a, u32b );

   color::fix::overburn( u32b );
   color::fix::overburn( u32a, u32b );

   color::fix::unique( u32b );
   color::fix::unique( u32a, u32b );

   color::check::overburn( u32b );
   color::check::integrity( u32b );
   color::check::unique( u32b );

   color::operation::normalize( u32b, 0 );
   color::operation::normalize<0>( u32b );

   color::compare::equal( u32b, u32b );
   color::compare::different( u32b, u32b  );
   color::compare::less_strict( u32b, u32b  );
   color::compare::great_strict( u32b, u32b  );
   color::compare::less_or_equal( u32b, u32b  );
   color::compare::great_or_equal( u32b, u32b  );

   color::compare::darker( u32b, u32b  );
   color::compare::brighter( u32b, u32b  );

   color::operation::gamma( u32b, 0.5 );
   color::operation::gamma( u32a, u32b, 0.5 );

   color::operation::bias( u32b, 0.5 );
   color::operation::bias( u32a, u32b, 0.5 );

   color::operation::gain( u32b, 0.5 );
   color::operation::gain( u32a, u32b, 0.5 );

   color::operation::floor( u32a, u32b );
   color::operation::floor( u32a, u32b, u32c );

   color::operation::ceil( u32a, u32b );
   color::operation::ceil( u32a, u32b, u32c );

   color::operation::clip( u32, u32a, u32b );
   color::operation::clip( u32, u32a, u32b, u32c );





   u32a = u32b + u32c;
   u32a = u32b - u32c;
   u32a = 0.5 * u32c;
   u32a = u32c * 0.5;
   u32a = u32c / 0.5;
   u32a += u32b;
   u32a -= u32b;
   u32a /= 0.5;
   u32a *= 0.5;

   u32a == u32b;
   u32a != u32b;
   u32a > u32b;
   u32a < u32b;

   u32a >= u32b;
   u32a <= u32b;

   //std::cout << std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "  type - " << typeid(category_name).name() << std::endl;
   //std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
  }


/*void test_gray_conversion_intrisic()
 {
  color::gray_double  d;
  color::gray_float   f;
  color::gray_uint32 u32;

  d = d;
  d = f;
  d = u32;

  f = d;
  f = f;
  f = u32;

  u32 = d;
  u32 = f;
  u32 = u32;
 }
*/