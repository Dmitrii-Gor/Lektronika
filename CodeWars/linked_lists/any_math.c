#include <stdbool.h>
#include <stddef.h>

struct Node {
	struct Node *next;
	int data;
};

typedef bool (*predicate_func) (int);

bool any_match (const struct Node *list, predicate_func f)
{
  const struct Node *current=list;

  while(current != NULL)
  {
    if(f(current->data))
      return true;
    current=current->next;
  }
  return false;
}

bool all_match (const struct Node *list, predicate_func f)
{
  const struct Node *current=list;
  int flag=1;

  while(current != NULL)
  {
    if(!f(current->data))
      flag=0;
    current=current->next;
  }

  return flag ? true:false;
}
