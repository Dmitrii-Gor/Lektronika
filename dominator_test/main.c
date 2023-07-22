#include "unity.h"
#include "dominator.h"
//#include "file_to_test.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_for_3_4_3_2_3_1_3_3_array_return_3(void) {
    const int arr[8] = {3, 4, 3, 2, 3, 1, 3, 3};
    size_t n;
    n = 7;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(3, result);
}

void test_for_1_2_3_4_5_array_return_failure(void)
{
    const int arr[5] = {1, 2, 3, 4, 5};
    size_t n;
    n = 5;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(-1, result);
}

void test_for_1_1_1_2_2_2_array_return_failure(void)
{
    const int arr[6] = {1, 1, 1, 2, 2, 2};
    size_t n;
    n = 6;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(-1, result);
}

void test_for_1_1_1_2_2_2_2_array_return_2(void)
{
    const int arr[7] = {1, 1, 1, 2, 2, 2, 2};
    size_t n;
    n = 7;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(2, result);
}

void test_out_of_range_return_failure(void)
{
    const int arr[7] = {1, 1, 1, 2, 2, 2,2};
    size_t n;
    n = 6;
    int result = dominator(arr, n);
    TEST_ASSERT_EQUAL_INT(-1, result);
}


int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_for_3_4_3_2_3_1_3_3_array_return_3);
    RUN_TEST(test_for_1_2_3_4_5_array_return_failure);
    RUN_TEST(test_for_1_1_1_2_2_2_array_return_failure);
    RUN_TEST(test_for_1_1_1_2_2_2_2_array_return_2);
    RUN_TEST(test_out_of_range_return_failure);
    return UNITY_END();
}
