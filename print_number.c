#include <unistd.h>
#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * 
 * Return: The number of characters printed.
 */
int print_number(int n)
{
    unsigned int num = n;
    int count = 0;

    if (n < 0)
    {
        count += write(1, "-", 1);
        num = -num;
    }

    if (num / 10)
        count += print_number(num / 10);

    count += write(1, &"0123456789"[num % 10], 1);

    return (count);
}

