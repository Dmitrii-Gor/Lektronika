#include <stdbool.h>

bool permute_a_palindrome(const char *str_in)
{
    int letter_counter[26] = {0};
    int oddCount = 0, index;

    int len = strlen(str_in);
    for (int i = 0; i < len; i++)
    {
        index = str_in[i] - 'a';
        letter_counter[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letter_counter[i] % 2 != 0)
        {
          oddCount++;
          if(oddCount > 1)
          {
            return 0;
          }
        }
    }

    return 1;
}
