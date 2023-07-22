#include "queue.h"
#include <stddef.h>

struct stack_item
{
    int value;
    struct stack_item *next;

};

struct stack_item *head;
struct stack_item *bottom;

void init_queue(void)
{
    head = NULL;
    bottom = malloc(sizeof(struct stack_item));
}

void show_queue(void)
{
    if(head == NULL)
    {
        printf("queue is empty\n");
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

void push_queue(int value_of_x)
{
    struct stack_item *ptr;
    ptr = malloc(sizeof(struct stack_item));
    ptr -> value = value_of_x;
    ptr -> next = head;
    head = ptr;
}

int pop_queue(void)
{
    if(head == NULL)
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        int i = bottom -> value;
        struct stack_item *ptr;
        ptr = bottom;
        bottom->next = head;
        bottom = bottom->next;
        free(ptr);
        return i;
    }
}
