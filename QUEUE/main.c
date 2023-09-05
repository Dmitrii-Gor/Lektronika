#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    push_queue(1);
    push_queue(2);
    push_queue(3);

    pull_queue(); // 1
    pull_queue();   // 2
    pull_queue();   // 3
    show_queue();   // empty

    push_queue(4);
    push_queue(5);
    push_queue(6);
    show_queue();   // 4, 5, 6

    pull_queue();   // 4
    show_queue();   // 5, 6

    push_queue(7);
    push_queue(8);
    push_queue(9);
    show_queue();   // 5, 6, 7, 8, 9

    pull_queue();   // 5
    pull_queue();   // 6
    pull_queue();   // 7
    pull_queue();   // 8
    pull_queue();   // 9
    pull_queue();   // error
    return 0;
}
