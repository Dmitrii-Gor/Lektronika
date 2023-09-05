#include <stddef.h>

struct Node {
  struct Node *next;
  int data;
};

typedef int (*map_func) (int);


struct Node *map_list (const struct Node *list, map_func f)
{
  if(!list)
    return NULL;

  struct Node *new_list = malloc(sizeof(struct Node));
  struct Node *head = new_list;

  while(list)
  {
    new_list->data = f(list->data);
    if(list->next)
    {
      new_list->next = malloc(sizeof(struct Node));
      new_list = new_list->next;
    }
    else
    {
      new_list -> next = NULL;
    }
    list = list->next;
  }
  return head;
}
