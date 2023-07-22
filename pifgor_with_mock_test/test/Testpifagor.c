

#include "unity.h"
#include "Mockmy_sqrt.h"
#include "pifagor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_pifagor_3_and_4_should_return_5(void) {

    my_sqrt_ExpectAndReturn(169, 13);
    double result = pifagor(5.0, 12.0);
    TEST_ASSERT_EQUAL_FLOAT(13, result);
}

