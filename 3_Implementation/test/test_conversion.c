#include "unity.h"
#include "unity_internals.h"
#include "conversion.h"
#include <string.h>

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_B_to_D(void)
{
  TEST_ASSERT_EQUAL(4,Binary_to_Decimal(100));
  TEST_ASSERT_EQUAL(0,Binary_to_Decimal(000));
}

void test_B_to_O(void)
{
    TEST_ASSERT_EQUAL(10,Binary_to_Octal(1000));
    TEST_ASSERT_EQUAL(11,Binary_to_Octal(1001));
}

// void test_B_to_H(void)
// {
//     strcmp("10",Binary_to_Hexadecimal(10000));
//     strcmp("0",Binary_to_Hexadecimal(0000));
// }

void test_D_to_B(void)
{
  TEST_ASSERT_EQUAL(100,Decimal_to_Binary(4));
  TEST_ASSERT_EQUAL(0,Decimal_to_Binary(0));
}

void test_D_to_O(void)
{
    TEST_ASSERT_EQUAL(10,Decimal_to_Octal(8));
    TEST_ASSERT_EQUAL(0,Decimal_to_Octal(00));
}

/*void test_D_to_H(void)
{
    strcmp("A",Decimal_to_Hexadecimal(10));
    strcmp("0",Decimal_to_Hexadecimal(0));
}
*/
void test_Power(void)
{
  TEST_ASSERT_EQUAL(4,Power(2,2));
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_B_to_D);
  RUN_TEST(test_B_to_O);
  //RUN_TEST(test_B_to_H);
  RUN_TEST(test_D_to_B);
  RUN_TEST(test_D_to_O);
  //RUN_TEST(test_D_to_H);
  RUN_TEST(test_Power);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
