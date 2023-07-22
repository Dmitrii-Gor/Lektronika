#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"


int main()
{
    /*init_stack();
    push(12);
    show_stack();
    push(13);
    push(140);
    push(150);
    show_stack();
    printf("remove item - %d \n", pop());
    show_stack();
    printf("remove item - %d \n", pop());
    printf("remove item - %d \n", pop());
    show_stack();
    printf("remove item - %d \n", pop());
    printf("remove item - %d \n", pop());*/

    init_queue();
    push_queue(12);
    push_queue(15);
    push_queue(16);
    show_queue();
    printf("remove item - %d\n", pop_queue());
    show_queue();
    return 0;
}
