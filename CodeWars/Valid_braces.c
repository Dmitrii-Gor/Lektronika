#include <stdbool.h>

bool valid_braces (const char *braces)
{
  int len = strlen(braces);
char* stack = malloc(sizeof(char) * len);
int top = -1;
if(len%2 == 0)
{
for (int i = 0; i < len; i++)
{
    char sym = braces[i];
    if (sym == '(' || sym == '{' || sym == '[')
    {
        top++;
        stack[top] = sym;
    } else if (sym == ')' && top >= 0 && stack[top] == '(')
    {
        top--;
    } else if (sym == '}' && top >= 0 && stack[top] == '{')
    {
        top--;
    } else if (sym == ']' && top >= 0 && stack[top] == '[')
    {
        top--;
    } else
    {
        return false;
    }
}
}
else
{
    return false;
}

if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
  return false;
}
