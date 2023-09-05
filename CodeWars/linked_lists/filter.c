#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct Node {
  struct Node *next;
  int data;
};

typedef bool (*predicate_func) (int);

struct Node *filter_list (const struct Node *list, predicate_func f)
{
  if(!list)
    return NULL;

  struct Node *new_list = NULL;
  struct Node *head = NULL;

  while(list)
  {
    if(f(list->data))
    {
      if (new_list == NULL)
      {
        new_list = malloc(sizeof(struct Node));
        head = new_list;
      }
      else
      {
        new_list->next = malloc(sizeof(struct Node));
        new_list = new_list->next;
      }
      new_list->data = list->data;
    }


    list = list->next;
  }

  if (new_list)
  {
    new_list->next = NULL;
  }

  return head;
}
