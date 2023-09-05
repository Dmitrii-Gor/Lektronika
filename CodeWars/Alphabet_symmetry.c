#include <stddef.h>

void alphabet_positions (size_t nb_words, const char *const words[nb_words], short positions[nb_words])
{
  char letter;
  int counter;
  for(size_t i = 0; i < nb_words; i++)
  {
    const char *ptr_word = words[i];
    letter = 'a';
    counter = 0;
    for(size_t j = 0; ptr_word[j] != '\0'; j++)
    {
      if(ptr_word[j] == letter || ptr_word[j] == letter-32)
      {
          counter++;
      }
      letter++;
    }
    positions[i] = counter;
  }
}
