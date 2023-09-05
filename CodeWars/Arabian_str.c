#include <ctype.h>
#include <string.h>
#include <stdbool.h>

char *ToPascalCase (char *pascalCase, const char *string)
{
  int flag_new_word = 1;
  int pascal_index = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i]) || string[i] >= '0' && string[i] <= '9')
        {
            if (flag_new_word)
            {
                pascalCase[pascal_index++] = toupper(string[i]);
                flag_new_word = 0;
            }
            else
            {
                pascalCase[pascal_index++] = tolower(string[i]);
            }
        }
        else
        {
            flag_new_word = 1;
        }
    }

    pascalCase[pascal_index++] = '\0';
    return pascalCase;
}
