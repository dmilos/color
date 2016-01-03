
template< typename category_name >
 void test_operation()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   u32;
   model_type   u32a;
   model_type   u32b;
   model_type   u32c;

   // long names discourage usage of it directly.
   color::operation::addition( u32a, u32b, u32c );
   color::operation::addition( u32a, u32b );
   color::operation::subtract( u32a, u32b, u32c );
   color::operation::subtract( u32a, u32b );
   color::operation::invert( u32a, u32b );
   color::operation::invert( u32a );
   color::operation::scale( u32a, 0.5 );
   color::operation::scale( u32a, 0.5, u32b );
   color::operation::convex( u32a, 0.5, u32b );
   color::operation::convex( u32a, u32b, 0.5, u32c );

   color::operation::convex( u32a, u32b, 0.5, u32c );

   color::operation::blend( u32b, 0.5, u32c );
   color::operation::blend( u32b, u32b, 0.5, u32c );

   color::operation::blend<0>( u32b, u32a, u32b );
   color::operation::blend<0>( u32a, u32b );

   color::operation::mix( u32b, 0.5, u32c );
   color::operation::mix<0>( u32a, u32b );

   color::operation::fix( u32b );
   color::operation::fix( u32a, u32b );

   color::operation::clamp( u32b );
   color::operation::clamp( u32a, u32b );

   color::check::overburn( u32b );
   color::check::integrity( u32b );

   color::operation::normalize( u32b, 1 );
   color::operation::normalize<1>( u32b );

   color::compare::equal( u32b, u32b );
   color::compare::different( u32b, u32b  );
   color::compare::less_strict( u32b, u32b  );
   color::compare::great_strict( u32b, u32b  );
   color::compare::less_or_equal( u32b, u32b  );
   color::compare::great_or_equal( u32b, u32b  );

   color::compare::darker( u32b, u32b  );
   color::compare::lighter( u32b, u32b  );

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

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
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