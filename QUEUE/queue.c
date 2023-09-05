#include <stddef.h>
#define BUFER_LEN 5

int bufer[BUFER_LEN];
int index = 0;
int counter_of_push = 0;
int counter_of_pull = -1;

int push_queue(int value_of_x)
{
    if(index>=BUFER_LEN)
    {
        index = 0;
    }
    bufer[index] = value_of_x;
    printf("push - %d  \n", value_of_x);
    index++;
    counter_of_push++;
    if(counter_of_push > BUFER_LEN)
    {
        printf("queue is full\n");
        return -1;
    }
    return 0;
}

void show_queue(void)
{
    if(counter_of_push == 0)
    {
        printf("queue is empty\n");
    }
    else
    {
         printf("\n-================-\n");
        for(int i = BUFER_LEN-1;  i>= 0; i--)
        {
            printf("%d\t", bufer[i]);
        }
        printf("\n-================-\n");
    }
}

int pull_queue(void)
{
    counter_of_pull++;
    counter_of_push--;
    printf("pull - %d \n", bufer[counter_of_pull]);
    return bufer[counter_of_pull];
}
