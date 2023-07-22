#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
  int len_of_str = strlen(str), j=0;
  char *copy_of_str = malloc(sizeof(char) * len_of_str + 1);

  strcpy(copy_of_str, str);

  for(int i = 0; i<len_of_str; i++)
  {
    if (copy_of_str[i] != 'a' && copy_of_str[i] != 'e' && copy_of_str[i] != 'i' && copy_of_str[i] != 'o' && copy_of_str[i] != 'u' &&
            copy_of_str[i] != 'A' && copy_of_str[i] != 'E' && copy_of_str[i] != 'I' && copy_of_str[i] != 'O' && copy_of_str[i] != 'U')
    {
      copy_of_str[j] = copy_of_str[i];
      j++;
    }
  }
  copy_of_str[j] = '\0';

	return copy_of_str;
}
