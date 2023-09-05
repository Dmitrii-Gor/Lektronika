#include <stdlib.h>
#include <string.h>

char *longestConsec (const char *const strings[/*arr_len*/], int arr_len, int k)
{
  int length, max_length = 0, max_start = 0;

   if (arr_len == 0 || k <= 0 || k > arr_len)
        return calloc(1, 1);

   for (int i = 0; i <= arr_len - k; ++i)
    {
        length = 0;
        for (int j = i; j < i + k; ++j)
            length += strlen(strings[j]);

        if (length > max_length)
        {
            max_length = length;
            max_start = i;
        }
    }
/* return a heap-allocated string, memory will be freed */

  char *result = (char *)calloc(max_length + 1, sizeof(char));

  for (int i = max_start; i < max_start + k; ++i)
    {
        strcat(result, strings[i]);
    }

    return result;

}
