#include <stddef.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  int index = count - 1;
  long int result = 0;

  for(int i = 0; i<count; i++)
  {
    result += bits[index] * pow(2, i);
    index--;
  }
  return result;
}
