
int main(int argc, char const *argv[])
 {
  extern void test_rgb_float_only();
  extern void test_rgb_uint32_only();
  extern void test_rgb_conversion_intrisic();

  test_rgb_float_only();
  test_rgb_uint32_only();
  test_rgb_conversion_intrisic();

  extern void test_gray_float_only();
  extern void test_gray_uint32_only();
  extern void test_gray_conversion_intrisic();


  test_gray_float_only();
  test_gray_uint32_only();
  test_gray_conversion_intrisic();

  return 0;
 }
