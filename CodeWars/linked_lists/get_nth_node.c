#include <stddef.h>

struct List {
	struct List *next;
	int data;
};

// return the nth node, or NULL if n >= length(list)
struct List *get_nth_node (const struct List *list, size_t n)
{
  struct List* current = list;
  int length = 0;

  while(current != NULL && length < n)
  {
    length++;
    current = current -> next;
  }

  if (length == n && current != NULL)
  {
        return current;
  }
  else
  {
        return NULL;
  }

}
