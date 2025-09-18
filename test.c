// SPDX-License-Identifier: MIT

#define MICRO_TESTS_MULTITHREADED
#define MICRO_TESTS_IMPLEMENTATION
#include "micro-tests.h"

TEST(base_tests, simple_assertion)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(base_tests, simple_assert_eq)
{
  ASSERT_EQ(1, 1);
  TEST_SUCCESS;
}

TEST(base_tests2, simple_assert_not_eq)
{
  ASSERT_NOT_EQ(1, 0);
  TEST_SUCCESS;
}

#if 0
TEST(base_tests2, assert_should_fail)
{
  ASSERT(0);
  TEST_SUCCESS;
}
#endif

MICRO_TESTS_MAIN
