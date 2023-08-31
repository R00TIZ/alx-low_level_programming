#include <stdio.h>
/**
* print_recursive_string - shows a string and includes a unused line
* @str: pointer to the string to be appeared
* Result: No coordinate return value
*/
void print_recursive_string(char *str)
{
    if (*str == '\0')
    {
        putchar('\n');
    }
    else
    {
        putchar(*str);
        print_recursive_string(str + 1);
    }
}
