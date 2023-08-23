#include <stdlib.h>

//  return dynamically allocated C-string
//  output result will be freed by tester

const char *encode_cd(unsigned char n) {

  char* result = malloc(10*sizeof(char));
  result[10] = '\0';
  result[0] = 'P';

  char letter = 'P';

  for(int i = 1; i<9; i++)
  {
    if((n%2)==1)
    {
      letter = (letter == 'P') ? 'L' : 'P';
    }
    result[i] = letter;
    n /= 2;

  }
  return result;
}
