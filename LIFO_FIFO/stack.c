#include "stack.h"
#include <stddef.h>

struct stack_item
{
    int value;
    struct stack_item *next;
};

struct stack_item *head;

void init_stack(void)
{
    head = NULL;
}

void show_stack(void)
{
    if(head == NULL)
    {
        printf("stack is empty\n");
    }

    else
    {
        for(struct stack_item *p = head; p!= NULL; p = p->next)
        {
            printf("%d\t, %p\n", p->value, p->next);
        }
        printf("\n=======end of stack=======\n\n");
    }
}

void push(int value_of_x)
{
    struct stack_item *ptr;
    ptr = malloc(sizeof(struct stack_item));
    ptr -> value = value_of_x;
    ptr -> next = head;
    head = ptr;
}

int pop(void)
{
    if(head == NULL)
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        int i = head ->value;
        struct stack_item *ptr;
        ptr = head;
        head = head->next;
        free(ptr);
        return i;
    }
}
