#include <string.h>

char next_color(char c1, char c2)
{
    if (c1 == c2)
    {
        return c1;
    }
    else if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R'))
    {
        return 'B';
    }
    else if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R'))
    {
        return 'G';
    }
    else
    {
        return 'R';
    }
}

char triangle(const char *clrs)
{
    int len = strlen(clrs);
    char new_str[len];

    for(;len > 1; len--)
    {
        for (int i = 0; i < len - 1; i++)
        {
            new_str[i] = next_color(clrs[i], clrs[i + 1]);
        }
        new_str[len - 1] = '\0';
        clrs = new_str;
    }
    return clrs[0];
}
