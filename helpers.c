#include "main.h"

/* Implement helper functions here */

int print_char(char c)
{
    return write(1, &c, 1);
}

int print_string(char *str)
{
    int count = 0;

    if (!str)
        str = "(null)";
    while (*str)
    {
        count += write(1, str, 1);
        str++;
    }
    return count;
}

/* Implement other helper functions based on the requirements */

