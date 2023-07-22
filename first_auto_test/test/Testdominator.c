

#include "unity.h"

#include "dominator.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_for_3_4_3_2_3_1_3_3_array_return_3(void) {
    const int arr[8] = {3, 4, 3, 2, 3, 1, 3, 3};
    size_t n;
    n = 7;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(3, result);
}


