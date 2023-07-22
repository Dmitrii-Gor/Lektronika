#include "get_int.h"

char buffer[7];
char* get_char_console()
{

    int i = 0;
    for(; i < 5; i++)
    {
        char z = getch();
        if(z == 13)
        {
            break;
        }
        else if(z >= '0' && z <= '9')
        {
            printf("%c", z);
            buffer[i] = z;
        }
        else if(z == 8)
        {
            printf("%c %c", z, z);
            buffer[i-1] = 0;
            i=i-2;
        }
    }
    buffer[i]='\0';

}


int get_int(void)
{

    get_char_console();

    int size_of_char = strlen(buffer), value = 0;


    for(int i = 0; i < size_of_char; i++)
    {
        if(buffer[i] < '0' || buffer[i]>'9')
        {
            return 0;
        }
        int digit = buffer[i] - '0';
        value = value * 10 + digit;
    }

    return value;
}
