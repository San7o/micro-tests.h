// SPDX-License-Identifier: MIT
// Author:  Giovanni Santini
// Mail:    giovanni.santini@proton.me
// Github:  @San7o

#include "micro-tests.h"

#include <unistd.h>

// For debugging purposes
#define DO_SLEEP
#ifdef DO_SLEEP
  #define SLEEP(s) sleep(s)
#else
  #define SLEEP(s)
#endif

TEST(many_tests, test_1)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_2)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_3)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_4)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_5)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_6)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_7)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_8)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_9)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_10)
{
  ASSERT(1);
  SLEEP(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_11)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_12)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_13)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_14)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_15)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_16)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_17)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_18)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_19)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_20)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_21)
{
  ASSERT(1);
  TEST_SUCCESS;
}

TEST(many_tests, test_22)
{
  ASSERT(1);
  TEST_SUCCESS;
}
