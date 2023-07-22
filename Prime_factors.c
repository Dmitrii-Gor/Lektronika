#include <math.h>

int prime_factors (unsigned long long n, unsigned long long factors[])
{

  if(n == 1)
  {
    return 0;
  }

  int index = 0;

  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n%i == 0)
    {
      factors[index] = i;
      index++;
      n = n / i;
      i--;
    }
  }
  if(n!=1)
  {
    factors[index] = n;
    index++;
  }
  return index;
}
