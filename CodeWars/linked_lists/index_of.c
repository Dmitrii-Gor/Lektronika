#include <stddef.h>

struct Node {
	struct Node *next;
	int data;
};

int index_of (const struct Node *list, int search_val)
{
  struct Node *current = list;
  int counter_node = -1;

  while(current != NULL)
  {
    counter_node++;
    if(current -> data == search_val)
    {
      return counter_node;
    }
    current = current -> next;
  }
	return -1;
}
