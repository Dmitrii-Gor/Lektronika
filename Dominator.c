#include <stddef.h>

int dominator(const int *array, size_t n) {

    int counter = 0, chisl;

    for(int i = 0; i<n; i++)
    {
      counter = 0;
      chisl = array[i];
      for(int j = 0; j < n; j++)
      {
      if(array[i] == array[j])
        {
            counter++;
        }
      }

    if(counter > n/2)
    {
        return chisl;
    }
    }
  return -1;
}
