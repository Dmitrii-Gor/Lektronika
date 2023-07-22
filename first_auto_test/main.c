#include <stdio.h>
#include <stdlib.h>
#include "dominator.h"

int main()
{
    int result;
    const int arr[8] = {3, 4, 3, 2, 3, 1, 3, 3};
    int size = 8;

    result = dominator(arr, size);
    printf("result = %d", result);

    return 0;
}
