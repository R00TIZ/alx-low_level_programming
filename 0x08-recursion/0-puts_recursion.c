#include <stdio.h>

/**
 * print_recursive_string - displays a string and adds a new line
 * @str: pointer to the string to be shown
 * Result: No direct return value.
 * It carries out its function recursively.
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
