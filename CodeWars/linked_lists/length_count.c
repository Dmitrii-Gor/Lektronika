#include <stddef.h>

struct Node {
	struct Node *next;
	int value;
};

size_t list_length (const struct Node *list)
{
  size_t length = 0;
  struct Node* current = list;
    while (current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

size_t list_count (const struct Node *list, int search_val)
{
  struct Node* current = list;
  size_t counter = 0;

  while (current != NULL)
  {
    if(current -> value == search_val)
    {
      counter++;
    }
    current = current -> next;
  }
	return counter;
}
