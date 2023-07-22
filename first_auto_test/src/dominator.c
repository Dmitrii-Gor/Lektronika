#include "dominator.h"
#include <stddef.h>

int dominator(const int *arr, int n) {

    int counter = 0, chisl;

    for(int i = 0; i<n; i++)
    {
      counter = 0;
      chisl = arr[i];
      for(int j = 0; j < n; j++)
      {
      if(arr[i] == arr[j])
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
