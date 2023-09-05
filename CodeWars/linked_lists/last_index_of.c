#include <stddef.h>

struct List {
	struct List *next;
	int data;
};

int last_index_of (const struct List *list, int search_val)
{
  struct List *current = list;
  int node_index = -1, result, flag = 0;

  while(current != NULL)
  {
    node_index++;
    if(current -> data == search_val)
    {
        result = node_index;
        flag = 1;
    }
    current = current -> next;
  }

  return flag == 1 ? result : -1;
}
